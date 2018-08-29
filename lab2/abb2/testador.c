#include "abb.h"

int main(){
    abb* a = criaArvore();
    int N;


    printf("Digite o numero de nós da arvore:");
    scanf("%d", &N);

    a = radomAbb(a, N);

    printAbb(a);
    printf("\n\n");

    printf("%d\n", alturaAbb(a) );

    liberaAbb(a);

    return 0;
}
