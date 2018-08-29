#include "abb.h"

int main(){
    abb* a = criaArvore();

    a = addNo(a, 5);
    a = addNo(a, 1);
    a = addNo(a, 2);
    a = addNo(a, 3);
    a = addNo(a, 7);
    a = addNo(a, 9);

    printAbb(a);
    printf("\n\n");

    liberaAbb(a);

    return 0;
}
