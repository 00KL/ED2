#include "crivo.h"

int main(){
	//Leitura do ultimo natural da lista
	int N;
	printf("Digite um valor para N:");
	scanf("%d", &N);

	//Criacao da lista de nataruais entre 0 e N e do ponteiro q ira receber
	//os primos
	void *naturais = (int *)geraVetor(N);
	printVetor(naturais);
	printf("\n\n");

	//marcação de numeros nao primos
	naturais = marca(naturais);
	printVetor(naturais);
	printf("\n\n");

	//criação de lista de numeros primos
	void *primos = extrai(naturais);
	printf("\n\n");

	return 0;
}
