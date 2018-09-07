#include "abb.h"

//2.  Qual  ́e a altura maxima e mınima de uma BST em funcao de N ?
// Considerando a raiz como no 0 temos q a altura máxima seria N-1
// A altura minima seria (N - 1)/2

//o rand() esta ratornando repetidos impossibilitando a produção
//de arvores muito grandes mesmo com N = 10^6


int main(){
    abb* a = criaArvore();
    int N = 10;

    addNo(a, 6);
    addNo(a, 2);
    addNo(a, 7);
    addNo(a, 1);
    addNo(a, 4);
    addNo(a, 9);
    addNo(a, 3);
    addNo(a, 5);
    addNo(a, 8);

    //a = radomAbb(a, N);

    levelOrder(a);
    printf("\n\n");

    //pre_pilha(a);
    //in_pilha(a);

    //pos_order(a);
    //printf("\n");
    //pos_pilha(a);


    liberaAbb(a);

    return 0;
}
