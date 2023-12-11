VALGRIND = valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file=valgrind-out.txt
# --exit-on-first-error=yes --error-exitcode=1

all:
	$(MAKE) compilar
	$(MAKE) ejecutar1D

compilar:
	bison -d -t parser.y
	flex scanner.l
	gcc -O0 -g -c lex.yy.c -o lexer.o
	gcc -O0 -g parser.tab.c lexer.o modulos/listaId.c modulos/tablaDeSimbolos.c modulos/tablaDeCuadruplas.c -lfl -lm -o compilador

ejecutarIntercambiar:
	./compilador ejemplos/intercambiar.mdv

ejecutar1:
	./compilador ejemplos/programa1.mdv

ejecutar1D:
	$(VALGRIND) ./compilador ejemplos/programa1D.mdv

clean:
	rm -f lexer.o parser.tab.c parser.tab.h parser.output lex.yy.c compilador.o valgrind-out.txt compilador

