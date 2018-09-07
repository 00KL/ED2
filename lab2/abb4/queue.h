#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    void* valor;
    struct node* prox;
} node;

typedef struct queue{
    node* first;
    node* last;
} queue;

queue* queueEmpty();

void enqueue(queue*, void*);

void* dequeue(queue*);

void queueSearch(queue*, void* i);
