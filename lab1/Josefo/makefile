lista: testador.o lista.o
	gcc -o exe testador.o lista.o && ./exe

vetor: testador.o vetor.o
	gcc -o exe testador.o vetor.o && ./exe



testador.o:
	gcc -c testador.c

lista.o:
	gcc -c lista.c

vetor.o:
	gcc -c vetor.c



clean:
	rm *o *gch
