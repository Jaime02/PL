all:
	bison -d -t parser.y
	flex scanner.l
	gcc -c lex.yy.c -o lexer.o
	gcc parser.tab.c lexer.o listaId.c tablaDeSimbolos.c tablaDeCuadruplas.c -lfl -lm -o compilador.o

clean:
	rm -f lexer.o parser.tab.c parser.tab.h parser.output lex.yy.c compilador.o
