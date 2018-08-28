all: Dijkstra clean

Dijkstra: testador.o Dijkstra.o
	gcc -o exe Dijkstra.o testador.o && ./exe

testador.o:
	gcc -c testador.c

Dijkstra.o:
	gcc -c Dijkstra.c

clean:
	rm *.o *.gch
