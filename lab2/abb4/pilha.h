#ifndef _PILHA_H
#define _PILHA_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

typedef struct pilha{
    void* info;
    struct pilha* prox;
}pilha;

typedef struct gideon{
    pilha* topo;
}gideon;

gideon* criaPilhaVazia();
void push(void* , gideon* );
void* pop(gideon* );
int ispilhaVazia(gideon* );

#endif
