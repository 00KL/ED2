#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int valor;
    struct node* prox;
} node;

typedef struct queue{
    node* first;
    node* last;
} queue;

queue* queueEmpty();

void enqueue(queue*, int);

queue* dequeue(queue*);

void queueSearch(queue*);
