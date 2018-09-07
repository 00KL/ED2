#include "queue.h"

queue* queueEmpty(){
    queue* q = (queue*)malloc(sizeof(queue));
    q->first = NULL;
    q->last = NULL;
    return q;
}

void enqueue(queue* q, void* i){
    node* add = (node*)malloc(sizeof(node));

    add->valor = i;
    add->prox = NULL;

    if(q->last != NULL)
        q->last->prox = add;
    else
        q->first = add;

    q->last = add;
}

void* dequeue(queue* q){
    if(q == NULL){
        return NULL;
    }

    else if(q->first == q->last){
        node* n = q->first;
        q->first = NULL;
        q->last = NULL;

        void* retorno = n->valor;

        free(n);
        return retorno;
    }

    else{
        node* n = q->first;
        q->first = n->prox;

        void* retorno = n->valor;

        free(n);
        return retorno;
    }

}
