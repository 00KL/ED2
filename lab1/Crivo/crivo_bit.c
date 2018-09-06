#include "crivo.h"

//funçao q gera vetor de inteiros
void* geraVetor(int N){
    int i;
    //Criacao da lista de nataruais entre 0 e N e do ponteiro q ira receber
	//os primos
	int *naturais = (int*)malloc( (N+2) * sizeof(naturais));
	for(i = 2; i < (N+2) ; i++){
		naturais[i] = i;
	}

	//definindo o fim do vetor
	naturais[N+2] = -1;

    return naturais;
}
