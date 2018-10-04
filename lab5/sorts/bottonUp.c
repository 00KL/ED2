#include "../sort.h"

#define SZ2 (sz+sz)
#define MIN(X,Y) ((X < Y) ? (X) : (Y))

void merge(Item* a, Item* aux, int mid, int lo, int hi){
    for(int k = lo; k <= hi; k++) aux[k] = a[k]; //copia array

    int i = lo, j = mid+1;
    for(int k = lo; k <= hi; k++){
        if(i > mid) a[k] = aux[j++];
        else if(j > hi) a[k] = aux[i++];
        else if(aux[j] < aux[i]) a[k] = aux[j++];
        else a[k] = aux[i++];
    }
}

void sort(Item *a, int lo, int hi) {
    int N = (hi - lo) + 1; //limitador do primeiro for, pra ele percorrer ate
                           // < N, logo todas as posições delimitadas entre
                           // lo e hi
    int y = N - 1;//sera a quantidade de elementos q devem ser analizados no vetor

    Item *aux = malloc(N * sizeof(Item));
    for (int sz = 1; sz < N; sz = SZ2) {

        for (int lo = 0; lo < N-sz; lo += 2*sz) {
            int x = lo + SZ2 - 1;
            //merge(a, aux, lo, lo+sz-1, MIN(x,y));
            printf("lo %d; sz %d; lo+sz-1 %d; x %d; y %d; MIN(x,y) %d\n\n", lo, sz, (lo+sz-1), x, y, MIN(x,y));
        }
    }
    free(aux);
}
