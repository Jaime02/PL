bison -d -v -t gramatica.y
flex scanner.l
gcc -c lex.yy.c -o lexer.o
gcc gramatica.tab.c lexer.o -lfl -lm -o ejecutador
./ejecutador $1