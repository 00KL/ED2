all: testador clean

testador: testador.o
	gcc -o exe testador.o && ./exe
testador.o: testador.c
	gcc -c testador.c
clean:
	rm *.o
