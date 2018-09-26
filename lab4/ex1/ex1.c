#include <stdio.h>
#include <stdlib.h>

// Crie um programa que implementa uma calculadora pós-fixada com as operações de soma
// e multiplicação. O seu programa deve ler a expressão a ser calculada de stdin e imprimir
// o resultado em stdout. A expressão de entrada nunca tem mais de 50 operandos. Utilize
// a estrutura de dados auxiliar que achar mais adequada para implementar a calculadora.

int calc(void) {
    // Implemente essa funcao para resolver a questao 1.
    int stack[50] = {0}, i = 0;

    char op = getc(stdin);
    while(op != EOF){
        if(op != ' ' ){
            if(op >= '0' && op <= '9'){
                while(op != ' '){
                    stack[i] = 0;
                    stack[i] =(stack[i]*10) + (op - 48);

                    i++;
                    op = getc(stdin);
                }

            }

            else if(op != '\n'){
                i--;
                if(op == '+'){
                    stack[i - 1] += stack[i];
                }else{
                    stack[i - 1] *= stack[i];
                }
            }
        }

        op = getc(stdin);
    }

    return stack[i-1];
}

// Crie um programa que implementa uma calculadora p´os-fixada com as opera¸c˜oes de soma
// e multiplica¸c˜ao. O seu programa deve ler a express˜ao a ser calculada de stdin e imprimir
// o resultado em stdout. A express˜ao de entrada nunca tem mais de 50 operandos. Utilize
// a estrutura de dados auxiliar que achar mais adequada para implementar a calculadora.
int calc2(){
    char entrada;
    int numeros[50], atual, cont = 0;

    entrada = getc(stdin);
    while(entrada != EOF){
        if(entrada >= '0' && entrada <= '9'){
            atual = entrada - 48;
            entrada = getc(stdin);

            while(entrada != ' '){
                atual = (atual*10) + (entrada - 48);
                entrada = getc(stdin);
            }

            numeros[cont] = atual;
            printf("%d ", numeros[cont]);
            cont++;
        }
        else{
            if(entrada == '+'){
                numeros[cont] = numeros[cont] + numeros[cont-1];
                printf("(+)%d ", numeros[cont]);
                cont--;
            }

            else if(entrada == '*'){
                numeros[cont] = numeros[cont] * numeros[cont-1];
                printf("(*)%d ", numeros[cont]);
                cont--;
            }

            entrada = getc(stdin);
        }
    }

    return numeros[0];
}

int main() {
    // Le a entrada e calcula e retorna o resultado.
    int res = calc2();
    // Exibe a saida.
    printf("%d\n", res);
}
