#chamada para execução de todos os .o necessarios para a
#geração de cada executavel

selection: testador.o item.o selection.o
	gcc -o exe testador.o item.o selection.o

insertion: testador.o item.o insertion.o
	gcc -o exe testador.o item.o insertion.o

bubble: testador.o item.o bubble.o
	gcc -o exe testador.o item.o bubble.o

shaker: testador.o item.o shaker.o
	gcc -o exe testador.o item.o shaker.o

#criação dos .o

testador.o:
	gcc -c testador.c

item.o:
	gcc -c item.c

selection.o:
	gcc -c sorts/selection.c

insertion.o:
	gcc -c sorts/insertion.c

bubble.o:
	gcc -c sorts/bubble.c

shaker.o:
	gcc -c sorts/shaker.c

#limpeza dos .o

clean:
	rm *o *gch
