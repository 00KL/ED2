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

//marca os multiplos de cada primo
void multiplos(int* naturais, int primo, int i){

    for(i++; naturais[i] != -1 ; i++){
        if(naturais[i]%primo == 0){
            naturais[i] = 0;
        }
    }
}

//função q marca numeros não primos
void* marca(void* vet){
    int i, contador, *naturais = (int*)vet;

    for(i = 2; naturais[i+1] != -1; i++){

        if(naturais[i] != 0){
            printf("%d ", i);
            //assim é possivel saber quantos primos há
            contador ++;
            multiplos(naturais, naturais[i], i);
        }

    }

    return naturais;
}

void printVetor(void* vet){
    int* naturais = (int*) vet;

    for(int i = 0; naturais[i+1] != -1; i++){
        if (naturais[i] != 0) {
            printf("%d ", naturais[i]);
        }
    }
    printf("\n");
}
