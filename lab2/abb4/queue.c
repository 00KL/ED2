#include "queue.h"

queue* queueEmpty(){
    return NULL;
}

void enqueue(queue* q, int i){
    add = (node*)malloc(sizeof(node));

    add->valor = i;
    add->prox = NULL;

    if(q == NULL){
        q = (queue*)malloc(sizeof(queue));
        q->first = add;
        q->last = add;
    } else{
        q->
    }
}

queue* dequeue(queue*);

void queueSearch(queue*);
