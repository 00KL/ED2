#include "Dijkstra.h"

static char* entrada;
static Pilha* pilha;
static int i;
static double numero = 0;

void alocaNum(){
    while(entrada[i] != ' '){
        numero = numero*10;
        numero += ( entrada[i] - 48);

        i++;
    }

    pilha->Tdouble++;

    pilha->pilhaDouble[pilha->Tdouble] = numero;

    numero = 0;
}

void alocaChar(){

    pilha->Tchar++;

    pilha->pilhaChar[pilha->Tchar] = entrada[i];


}

void operacao(){

    if(pilha->pilhaChar[pilha->Tchar] == '+'){
        pilha->pilhaDouble[pilha->Tdouble - 1] +=  pilha->pilhaDouble[pilha->Tdouble];
        pilha->Tdouble--;
        pilha->Tchar--;

    }else if(pilha->pilhaChar[pilha->Tchar] == '-'){
        pilha->pilhaDouble[pilha->Tdouble - 1] -=  pilha->pilhaDouble[pilha->Tdouble];
        pilha->Tdouble--;
        pilha->Tchar--;

    }else if(pilha->pilhaChar[pilha->Tchar] == '*'){
        pilha->pilhaDouble[pilha->Tdouble - 1] *=  pilha->pilhaDouble[pilha->Tdouble];
        pilha->Tdouble--;
        pilha->Tchar--;

    }else if(pilha->pilhaChar[pilha->Tchar] == '/'){
        pilha->pilhaDouble[pilha->Tdouble - 1] /=  pilha->pilhaDouble[pilha->Tdouble];
        pilha->Tdouble--;
        pilha->Tchar--;
    }


}


void extracao(char* e){

    //1 atribuição
    entrada = e;

    //inicia pilha
    pilha = (Pilha*)malloc(sizeof(pilha));
    pilha->Tdouble = -1;
    pilha->Tchar = -1;

    for(i = 0; entrada[i] != '\0'; i++){

        if(entrada[i] >= '0' && entrada[i] <= '9' ){
            alocaNum();
        }

        if(entrada[i] == '+' || entrada[i] == '-' ||  entrada[i] == '*' || entrada[i] == '/'){
            alocaChar();
        }

        if(entrada[i] == ')'){
            operacao();
        }

    }

    printf("%.0f\n\n", pilha->pilhaDouble[0]);

}
