int: testador.o crivo_int.o
	gcc -o exe testador.o crivo_int.o && ./exe

char: testador.o crivo_char.o
	gcc -o exe testador.o crivo_char.o && ./exe

crivo_int.o:
	gcc -c crivo_int.c

crivo_char.o:
	gcc -c crivo_char.c

testador.o:
	gcc -c testador.c

clean:
	rm *.o *.gch
