#include "abb.h"

//2.  Qual  ́e a altura maxima e mınima de uma BST em funcao de N ?
// Considerando a raiz como no 0 temos q a altura máxima seria N-1
// A altura minima seria log n

//o rand() esta ratornando repetidos impossibilitando a produção
//de arvores muito grandes mesmo com N = 10^6
//Media ponderada 48,40
//A media é boa pois esta

int main(){
    abb* a = criaArvore();
    int N = 1000000;

    printf("%d\n\n", N);

    //printf("Digite o numero de nós da arvore:");
    //scanf("%d", &N);

    a = radomAbb(a, N);

    //printAbb(a);
    printf("\n\n");

    printf("%d\n", alturaAbb(a) );

    liberaAbb(a);

    return 0;
}
