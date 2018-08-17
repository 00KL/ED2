#include "crivo.h"

void printVetor(int* naturais){
    for(int i = 1; naturais[i+1] != FIM; i++){
        printf("%d ", naturais[i]);
    }
    printf("\n");
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
int* marca(int* naturais){
    int i, contador;

    for(i = 2; naturais[i] != FIM; i++){

        if(naturais[i] != 0){

            //assim é possivel saber quantos primos há
            contador ++;
            multiplos(naturais, naturais[i], i);
        }

    }

    //o vetor naturais se inicia na posição 2, como previamente estabelecido
    //no testador. Logo os primeiros dois elementos do vetor estão vazios.
    //o contador de primos será posto na posião 1 do vetor
    naturais[1] = contador;

    return naturais;
}


//função q extrai lista de numeros primos
int* extrai(int* naturais){
    int *primos = (int*)malloc( (naturais[1] + 1) *sizeof(primos)), cont = 0, i;

    for(i = 2; naturais[i] != FIM; i++){

        if(naturais[i] != 0){
            primos[cont] = naturais[i];
            cont++;
        }

    }

    primos[naturais[1]+1] = FIM;
    return primos;
}
