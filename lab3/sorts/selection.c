#include "../sort.h"

void sort(Item* vet, Item lo, Item hi){
    Item i, j;

    //primeiro for percorre o vetor
    for(i = 0; i < hi; i++){

        for(j = i+1; j<hi; j++){
            compexch(vet[i], vet[j]);
        }
    }

}
