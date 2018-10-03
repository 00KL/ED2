#chamada para execução de todos os .o necessarios para a
#geração de cada executavel

quick: testador.o item.o quick.o
	gcc -o exe testador.o item.o quick.o

#criação dos .o
quick.o:
	gcc -c sorts/quick.c


#Auxiliares
testador.o:
	gcc -c testador.c

item.o:
	gcc -c item.c

#limpeza dos .o

clean:
	rm *o *gch
