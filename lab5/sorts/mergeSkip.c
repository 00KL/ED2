#include "../sort.h"
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


void merge_sort(Item* a, Item* aux, int lo, int hi){
    if(hi <= lo) return;
    int mid = lo + (hi - lo)/2;

    merge_sort(a, aux, lo, mid);
    merge_sort(a, aux, mid+1, hi);
    if(a[mid] <= a[mid+1]) return;
    merge(a, aux, mid, lo, hi);

}


void sort(Item* a, int lo, int hi){
    int tam = (hi - lo) + 1;
    Item* aux = malloc(tam*sizeof(Item));
    merge_sort(a,  aux, lo, hi);
    free(aux);
}
