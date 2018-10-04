#chamada para execução de todos os .o necessarios para a
#geração de cada executavel

merge: testador.o item.o merge.o
	gcc -o exe testador.o item.o merge.o

cutOff: testador.o item.o cutOff.o insertion.o
	gcc -o exe testador.o item.o cutOff.o insertion.o

mergeSkip: testador.o item.o mergeSkip.o
	gcc -o exe testador.o item.o mergeSkip.o

cutOffSkip: testador.o item.o cutOffSkip.o insertion.o
	gcc -o exe testador.o item.o cutOffSkip.o insertion.o

bottonUp: testador.o item.o bottonUp.o
	gcc -o exe testador.o item.o bottonUp.o

#criação dos .o
merge.o:
	gcc -c sorts/merge.c

cutOff.o:
	gcc -c sorts/cutOff.c

mergeSkip.o:
	gcc -c sorts/mergeSkip.c

cutOffSkip.o:
	gcc -c sorts/cutOffSkip.c

bottonUp.o:
	gcc -c sorts/bottonUp.c

#Auxiliares
insertion.o:
	gcc -c sorts/insertion.c

testador.o:
	gcc -c testador.c

item.o:
	gcc -c item.c

#limpeza dos .o

clean:
	rm *o *gch
