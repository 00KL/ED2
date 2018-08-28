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

    for(i++; naturais[i] != FIM ; i++){
        if(naturais[i]%primo == 0){
            naturais[i] = 0;
        }
    }
}

//função q marca numeros não primos
void* marca(void* vet){
    int i, contador, *naturais = (int*)vet;

    for(i = 2; naturais[i+1] != FIM; i++){

        if(naturais[i] != 0){

            //assim é possivel saber quantos primos há
            contador ++;
            multiplos(naturais, naturais[i], i);
        }

    }

    //o vetor naturais se inicia na posição 2, como previamente estabelecido
    //no testador. Logo os primeiros dois elementos do vetor estão vazios.
    //o contador de primos será posto na posião 1 do vetor
    //naturais[1] = contador;


    return naturais;
}


// //função q extrai lista de numeros primos
// void* extrai(void* vet){
//     int* naturais = (int*)vet;
//
//     //naturais[1] tem o numero de primos, e o (+ 1) seta -1 na ultima
//     //posição do vetor para facilitar a leitura em printVetor
//     int *primos = (int*)malloc( (naturais[1] + 1) *sizeof(primos)), cont = 0, i;
//
//     for(i = 2; naturais[i] != FIM; i++){
//
//         if(naturais[i] != 0){
//             primos[cont] = naturais[i];
//             cont++;
//         }
//
//     }
//
//     primos[naturais[1]+1] = FIM;
//
//     printVetor(primos);
//
//     return primos;
// }


void printVetor(void* vet){
    int* naturais = (int*) vet;

    for(int i = 0; naturais[i+1] != FIM; i++){
        if (naturais[i] != 0) {
            printf("%d ", naturais[i]);
        }
    }
    printf("\n");
}
