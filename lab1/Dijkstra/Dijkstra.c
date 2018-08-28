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

    pilha->pilhaDouble[pilha->Tdouble] = numero;

    printf("%.0f ", pilha->pilhaDouble[pilha->Tdouble] );
    numero = 0;
    pilha->Tdouble++;
}

void alocaChar(){

    pilha->pilhaChar[pilha->Tchar] = entrada[i];

    printf("%c ", pilha->pilhaChar[pilha->Tchar]);
    pilha->Tchar++;

}

void operacao(){
    switch (pilha->Tchar) {
        case '+':
            pilha->pilhaDouble[pilha->Tdouble - 1] +=  pilha->pilhaDouble[pilha->Tdouble];
            pilha->Tdouble--;
            pilha->Tchar--;

        case '-':
            pilha->pilhaDouble[pilha->Tdouble - 1] -=  pilha->pilhaDouble[pilha->Tdouble];
            pilha->Tdouble--;
            pilha->Tchar--;

        case '*':
            pilha->pilhaDouble[pilha->Tdouble - 1] *=  pilha->pilhaDouble[pilha->Tdouble];
            pilha->Tdouble--;
            pilha->Tchar--;

        case '/':
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
    pilha->Tdouble = 0;
    pilha->Tchar = 0;

    for(i = 0; entrada[i] != '\0'; i++){
        if(entrada[i] == ' '){
            i++;

            if(entrada[i] != '(' && entrada[i] != ')'){

                if(entrada[i] >= '0' && entrada[i] <= '9' ){
                    alocaNum();
                }

                if(entrada[i] != ' '){
                    alocaChar();
                }

            }

            if(entrada[i] == ')'){
                printf("test\n");
                operacao();
            }

        }
    }

    printf("%.0f \n\n", pilha->pilhaDouble[0]);
}
