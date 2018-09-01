#include "../sort.h"

void sort(Item *vet, int lo, int hi){
    int i, j;
    for(j = lo; j < hi; j++){

        for(i = 0; i < hi - lo - 1; i++){
            compexch(vet[i], vet[i+1]);
        }
    }
}
