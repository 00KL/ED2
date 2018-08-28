#include "josefo.h"

// 2.  Crie  um  programa  cliente  que  recebe  como  parˆametros  os  valores
// N e M ,  inicializa  o c ́ırculo e exibe a sequˆencia de pessoas eliminadas no terminal.



// root@regata:~/Josefo# time ./exe
// Tamanho do circulo:9
// Regra de votação:5
// 5 1 7 4 3 6 9 2
//
// 8
//
// real    0m2.166s
// user    0m0.000s
// sys     0m0.016s

struct circulo{
    int valor;
    struct circulo* prox;
} typedef Circulo;


//criação de 3 variaveis
static Circulo* C, *aux, *prim;
static int N, M;

void iniciaCirculo(int i, int j){
    //Agora se tem acesso em todas as funções posteriomente escritas
    //as variaveis N e M
    //criação de 2 variaveis
    //2 atribuições
    N = i;
    M = j;

    //Cria-se o primiero elo do circulo, inicialmente sera 1.
    //1 alocação
    //1 atribuição
    C = (Circulo*)malloc(sizeof(Circulo));
    C->valor = 1;

    //conservando o primeiro elo
    prim = C;

    //For para criação dos demais N elos
    //O for por si so tem
    //  N+1 atribuição (i++ e i = 2)
    //  N+1 comparaçãoes (i <= N)
    //N-1(ja foi feito uma alocação do primeiro elo) alocações
    //3N - 1(pois a primeira atribuição de valor ja foi feita) atribuições
    for(i = 2; i <= N; i++){
        //criação de um elo do circulo
        aux = (Circulo*)malloc(sizeof(Circulo));
        aux->valor = i;

        //ligação entre do novo elo ao circulo
        C->prox = aux;

        //mudando C para se acrescentar novo elo na posição devida
        C = aux;

    }

    //fecha o circulo fazenfo o ultimo aelo apontar para o primeiro
    C->prox = prim;
}

void votacao(){

    //inicialização do indice do vetor
    int i;

    //Iniciando o circulo
    //1 atribuição
    C = prim;

    //N
    //a condição de parada é quando o proximo do atual for ele mesmo
    //logo so sobrou ele ciclo
    while(C != C->prox){

        //Dessa forma C ira estar na posição anterior ao elo
        //do ciclo q deve ser retirado
        //4 atribuições
        for(i = 0; i < M-2; i++){
            C = C->prox;

        }


        //remoção de elo
        aux = C->prox;
        C->prox = aux->prox;

        //o proximo a ser checado deve ser C->prox pois
        //C ja foi contado na atual
        C = C->prox;

        //printando em sequencias pessoas eliminadas
        //printf("%d ", aux->valor);

        //liberando memoria referente a pessoa eliminada
        free(aux);

    }

    //printf("\n\n%d \n", C->valor);

    free(C);
}
