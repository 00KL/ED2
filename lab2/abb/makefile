all: exe clean

exe: abb.o testador.o
	gcc -o exe abb.o testador.o && ./exe

abb.o:
	gcc -c abb.c

testador.o:
	gcc -c testador.c

clean:
	rm *o *gch
