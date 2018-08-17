all: testador clean

testador: testador.o crivo_int.o
	gcc -o exe testador.o crivo_int.o && ./exe

crivo_int.o: crivo_int.c
	gcc -c crivo_int.c

testador.o: testador.c
	gcc -c testador.c

clean:
	rm *.o *.gch
