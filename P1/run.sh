flex scanner.l
gcc lex.yy.c -o lexeador.o 
./lexeador.o $1
