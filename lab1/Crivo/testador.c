#include "crivo.h"

int main(){
	//Leitura do ultimo natural da lista
	int N, i;
	printf("Digite um valor para N:");
	scanf("%d", &N);

	//Criacao da lista de nataruais entre 0 e N e do ponteiro q ira receber
	//os primos
	int *naturais = (int*)malloc( (N+1) * sizeof(naturais)), *primos;
	for(i = 2; i < (N+1) ; i++){
		naturais[i] = i;
	}
	//definindo o fim do vetor
	naturais[N+1] = -1;

	//marcação de numeros nao primos
	naturais = marca(naturais);

	//criação de lista de numeros primos
	primos = extrai(naturais);

	//exibe lista de primos extraidos
	printVetor(primos);

	return 0;
}
