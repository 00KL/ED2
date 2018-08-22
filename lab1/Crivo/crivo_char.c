#include "crivo.h"

//funçao q gera vetor de inteiros
void* geraVetor(int N){
    int i;
    //Criacao da lista de nataruais entre 0 e N e do ponteiro q ira receber
	//os primos
	char *naturais = (char*)malloc( (N+1) * sizeof(naturais));
	for(i = 2; i < (N+1) ; i++){
		naturais[i] = 'o';
	}

	//definindo o fim do vetor
	naturais[N+1] = '1';

    return naturais;
}

//marca os multiplos de cada primo
void multiplos(char* naturais, int primo, int i){

    for(i++; naturais[i] != '1' ; i++){
        if(i%primo == 0){
            naturais[i] = 'X';
        }
    }
}

//função q marca numeros não primos
void* marca(void* vet){
    int i, contador = 0;
    char* naturais = (char*)vet;

    //O ultimo valor, mesmo primo, deve ser descosiderado. pois estamos interessados
    //nos valores primos entre 1 e o ultimo valor. por isso o indicie deve
    //checar se o proximo valor é '1'(condição de parada estabelicida)
    for(i = 2; naturais[i+1] != '1'; i++){

        if(naturais[i] != 'X'){

            //assim é possivel saber quantos primos há
            contador ++;
            multiplos(naturais, i, i);
        }

    }

    //printf("test\n\n");

    //o vetor naturais se inicia na posição 2, como previamente estabelecido
    //no testador. Logo os primeiros dois elementos do vetor estão vazios.
    //o contador de primos será posto na posião 1 do vetor
    naturais[1] = contador;

    return naturais;
}

void printVetorInt(void* vet){
    int* naturais = (int*) vet;

    for(int i = 0; naturais[i] != FIM; i++){
        printf("%d ", naturais[i]);
    }
    printf("\n");
}

//função q extrai lista de numeros primos
void* extrai(void* vet){
    char* naturais = (char*)vet;

    //naturais[1] tem o numero de primos, e o (+ 1) seta -1 na ultima
    //posição do vetor para facilitar a leitura em printVetor
    int *primos = (int*)malloc( (1 + ( (int) naturais[1] ) * sizeof(primos) ) );
    int cont = 0, i;

    for(i = 2; naturais[i+1] != '1'; i++){

        if(naturais[i] != 'X'){
            primos[cont] = i;
            cont++;
        }

    }

    //printf("\n\n%d %d\n\n", cont, (int) naturais[1]);

    primos[cont] = FIM;
    printVetorInt(primos);
    return primos;
}

void printVetor(void* vet){
    char* naturais = (char*) vet;

    printf("%d ", (int) naturais[1]);

    for(int i = 2; naturais[i+1] != '1'; i++){
        if(naturais[i] == 'o'){
            printf("%d ", i);
        }else{
            printf("%c ", naturais[i]);
        }

    }
    printf("\n");
}
