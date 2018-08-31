all: exe clean

exe: testador.o item.o selection.o
	gcc -o exe testador.o item.o selection.o

testador.o:
	gcc -c testador.c

item.o:
	gcc -c item.c

selection.o:
	gcc -c selection.c

clean:
	rm *o *gch
