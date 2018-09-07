all: exe clean

exe: abb.o testador.o pilha.o
	gcc -o exe abb.o testador.o pilha.o queue.c && ./exe

abb.o:
	gcc -c abb.c

testador.o:
	gcc -c testador.c

pilha.o:
	gcc -c pilha.c

clean:
	rm *o *gch
