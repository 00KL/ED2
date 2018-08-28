#include "josefo.h"

// 2.  Crie  um  programa  cliente  que  recebe  como  parˆametros  os  valores
// N e M ,  inicializa  o c ́ırculo e exibe a sequˆencia de pessoas eliminadas no terminal.

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
