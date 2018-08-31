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
        r = rand()%20;
        printf("%d ", r);
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



void percorre(abb* a, void (*callback)(abb*)){

    if(a == NULL){
        //printf("()  ");

    }else{
        callback(a->esq);
        printf("%d ", a->valor);
        callback(a->dir);

        //printf(")   ");
    }

}

void pre_order(abb* a){
    if(a != NULL){
        printf("%d ", a->valor);
        pre_order(a->esq);
        pre_order(a->dir);
    }

}

void in_order(abb* a){
    if(a != NULL){
        in_order(a->esq);
        printf("%d ", a->valor);
        in_order(a->dir);
    }

}

void pos_order(abb* a){
    if(a != NULL){
        pos_order(a->esq);
        pos_order(a->dir);
        printf("%d ", a->valor);
    }

}

void pre_pilha(abb* a){
    sentinela* s = criapilhaVazia();
    push(a, s);

    abb* aux;

    if(a == NULL){
        printf("-1\n");
        return;
    }

    while(!ispilhaVazia(s)){

        aux = (abb*) pop(s);
        printf("(%d) ", aux->valor);

        if(aux->dir != NULL){
            push(aux->dir, s);

        }

        if(aux->esq != NULL){
            push(aux->esq, s);
        }
    }

    printf("\n\n");
}


void in_pilha(abb* a){
    sentinela* s = criapilhaVazia();
    //push(a, s);

    abb* aux = a;

    if(a == NULL){
        printf("-1\n");
        return;
    }

    while( (!ispilhaVazia(s)) || aux != NULL){
        if(aux != NULL){
            push(aux,s);
            aux = aux->esq;
        }else{
            aux = (abb*) pop(s);
            printf("%d ", aux->valor );
            aux = aux->dir;
        }

    }
    printf("\n\n");
}




void pos_pilha(abb* a){
    sentinela* s = criapilhaVazia();
    //push(a, s);

    abb* aux = a;

    if(a == NULL){
        printf("-1\n");
        return;
    }

    while( (!ispilhaVazia(s)) || aux != NULL){
        if(aux != NULL){
            push(aux,s);
            aux = aux->esq;
        }else{
            aux = (abb*) pop(s);
            //printf("%d ", aux->valor );
            aux = aux->dir;
        }

    }
    printf("\n\n");
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

void printAbb(void* v){
    abb* a = (abb*) v;

    printf("%d ",a->valor );
}
