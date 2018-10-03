#include "../sort.h"
#include "../item.h"


#define exch(A, B)      { Item t = A; A = B; B = t; }

int partition(Item* a,  int lo, int hi){
    int i = lo, j = hi+1;
    Item v = a[lo];

    while(1){
        while(a[++i] < v) if(i == hi) break;//procurando item menor q v no lado esquerdo

        while(v < a[--j]) if(j == lo) break;//no lado direito

        if(i >= j) break;//caso i seja igual ou maior q j não há mais itens
                         // a serem checados

        exch(a[i], a[j]);//troca de lugar o item maior q v com o tem menor
    }

    exch(a[lo], a[j]);//troca a posição de v com a ultima posição de j
    //q necessariamente sera menor q v

    return j;//retorna index
}

//quick
void quick(int* a, int lo, int hi){
    if(hi <= lo) return;

    int division = partition(a, lo, hi);
    //printf("DIVISION:");printVetor(a, tam);
    quick(a, lo, division-1);
    //printf("LO:");printVetor(a, tam);
    quick(a, division+1, hi);
    //printf("HI:");printVetor(a, tam);
}

void sort(int* a, int lo, int hi){
    quick(a, lo, hi);
}
