#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include "pilha.h"



sentinela* criapilhaVazia(){
    sentinela* x = (sentinela*)malloc(sizeof(x));
    x->topo = NULL;
    return x;
}

void push(void* x, sentinela* y){
    pilha* m = (pilha*)malloc(sizeof(m));

    m->info = x;
    m->prox = y->topo;

    y->topo = m;
}

void* pop(sentinela* y){
    if(ispilhaVazia(y)){
        return NULL;
    }
    void* x = y->topo->info;
    y->topo = y->topo->prox;

    return x;
}

int ispilhaVazia(sentinela* x){
    return x->topo == NULL;
}
