#include "pilha.h"

pilha* criapilhaVazia(){
    pilha* x = (pilha*)malloc(sizeof(x));
    x->info = NULL;
    x->prox = NULL;

    return x;
}

void push(void* x, pilha* y){
    pilha* m = (pilha*)malloc(sizeof(m));

    m->info = x;
    m->prox = y->topo;

    y->topo = m;
}

void* pop(pilha* y){
    if(ispilhaVazia(y)){
        return NULL;
    }
    void* x = y->topo->info;
    y->topo = y->topo->prox;

    return x;
}

int ispilhaVazia(pilha* x){
    return x->topo == NULL;
}
