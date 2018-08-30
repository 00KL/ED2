#include "abb.h"

abb* criaArvore(){
    return NULL;
}

abb* addNo(abb* a, int i){

    //caso a arvore esteja vazia
    if(a == NULL){
        a = (abb*)malloc(sizeof(abb));
        a->valor = i;
        a->esq = NULL;
        a->dir = NULL;

        return a;
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
                    abb* novo = (abb*)malloc(sizeof(abb));
                    novo->valor = i;
                    novo->esq = NULL;
                    novo->dir = NULL;

                    a->esq = novo;
                    return a;
                }

                //caso haja
                else{
                    a->esq = addNo(a->esq, i);
                    return a;

                }

            }


            else{
                if(a->dir == NULL){
                    abb* novo = (abb*)malloc(sizeof(abb));
                    novo->valor = i;
                    novo->esq = NULL;
                    novo->dir = NULL;

                    a->dir = novo;
                    return a;
                }

                else{
                    a->dir = addNo(a->dir, i);
                    return a;
                }

            }

        }

    }

    return NULL;

}


abb* radomAbb(abb* a, int N){

    srand(time(NULL));   // should only be called once
    int i, r;

    for(i = 0; i <= N; i++){
        r = rand();
        //printf("%d ", r);
        a = addNo(a, r);
    }

    return a;
}



void liberaAbb(abb* a){
    if(a->esq != NULL){
        liberaAbb(a->esq);
    }

    if(a->dir != NULL){
        liberaAbb(a->dir);
    }

    free(a);
}



void printAbb(abb* a){

    if(a == NULL){
        printf("()  ");

    }else{
        printf("%d ( ", a->valor);

        printAbb(a->esq);
        printAbb(a->dir);

        printf(")   ");
    }

}

int alturaAbb(abb* a){

    if(a == NULL){
        return -1;
    }
    else{
        int esq = alturaAbb(a->esq);
        int dir = alturaAbb(a->dir);

        if(esq < dir){
            return dir + 1;
        } else {
            return esq + 1;
        }
    }

    return -1;
}
