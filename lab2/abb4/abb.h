#ifndef _ABB_H
#define _ABB_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include "pilha.h"


typedef struct abb {
    int valor;
    struct abb* esq;
    struct abb* dir;
}abb;

abb* criaArvore();

abb* radomAbb(abb*, int);

abb* addNo(abb*, int);

void percorre(abb*, void (*callback)(abb*) );

void liberaAbb(abb*);

int alturaAbb(abb*);

void printAbb(void*);


//formas de percorrer
void pre_order(abb*);
void in_order(abb*);
void pos_order(abb*);

//formas de percorrer não recursivas
void pre_pilha(abb*);
void in_pilha(abb*);
void pos_pilha(abb*);

#endif
