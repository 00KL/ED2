#include "abb.h"

abb* criaArvore(){
    return NULL;
}

abb* addNo(abb* a, int i){
    //caso a arvore esteja vazia
    if(a == NULL){
        a = (abb*)malloc(sizeof(a));
        a->valor = i;
        a->esq = NULL;
        a->dir = NULL;
    }

    else {

        //caso o valor ja exista
        if(a->valor == i){
            return a;
        }

        else {

            //caso o valor seja menor q o valor da raiz
            if(a->valor > i){
                //caso n haja nada a esquerda
                if(a->esq == NULL){
                    abb* novo = (abb*)malloc(sizeof(novo));
                    novo->valor = i;
                    novo->esq = NULL;
                    novo->dir =NULL;

                    a->esq = novo;
                    return a;
                }

                //caso haja
                else{
                    return addNo(a->esq, i);

                }

            }


            else{
                if(a->dir == NULL){
                    abb* novo = (abb*)malloc(sizeof(novo));
                    novo->valor = i;
                    novo->esq = NULL;
                    novo->dir =NULL;

                    a->dir = novo;
                    return a;
                }

                else{
                    return addNo(a->dir, i);
                }

            }

        }

    }

}

void liberaAbb(abb*){

}

void printAbb(abb* a){
    printf("%d( ", a->valor);

    if(a == NULL){
        printf("()");
        return;
    }else{
        printf("%d( ", a->valor);

        printAbb(a->esq);
        printAbb(a->dir);

        printf(")\n\n");
    }

}
