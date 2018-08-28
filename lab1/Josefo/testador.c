#include "josefo.h"

int main(){
    //criação de 2 variaveis
    int N, M;

    //leitura de variavel
    printf("Tamanho do circulo:");
    scanf("%d", &N);

    //leitura de variavel
    printf("Regra de votação:");
    scanf("%d", &M);

    iniciaCirculo(N, M);

    votacao();
}
