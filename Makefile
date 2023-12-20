VALGRIND = valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file=valgrind-out.txt
# --exit-on-first-error=yes --error-exitcode=1

all: compilar

compilar:
	bison -d -t parser.y
	flex scanner.l
	gcc -O0 -g -c lex.yy.c -o lexer.o
	gcc -O0 -g parser.tab.c lexer.o modulos/listaId.c modulos/tablaDeSimbolos.c modulos/tablaDeCuadruplas.c -lfl -lm -o compilador

ejecutarIntercambiar: compilar
	./compilador ejemplos/intercambiar.mdv

ejecutarAritmeticas: compilar
	./compilador ejemplos/aritmeticas.mdv

ejecutarPrograma1: compilar
	./compilador ejemplos/programa1.mdv

ejecutarPrograma2: compilar
	./compilador ejemplos/programa2.mdv

clean:
	rm -f lexer.o parser.tab.c parser.tab.h parser.output lex.yy.c compilador.o valgrind-out.txt compilador
