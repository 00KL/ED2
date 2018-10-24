#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "PQ.h"

// TODO: Aqui você deve implementar uma fila com prioridade mínima para
//       ordenar os eventos por tempo, isto é, o evento com o menor tempo tem
//       a maior prioridade. Veja as funções definidas em 'event.h' para
//       a manipulação das estruturas de evento. A princípio, as funções já
//       existentes em 'event.h' são suficientes para implementar a simulação,
//       isto é, você não precisa implementar mais nada lá.
//
//       Você é livre para implementar a fila com prioridade da forma que quiser
//       mas é recomendado usar um min-heap para obter um bom desempenho. As
//       simulações maiores geram uma quantidade grande de eventos: um
//       limite superior frouxo (mas seguro) para o número máximo simultâneo de
//       eventos é N^3, aonde N é o número de partículas.

// TODO: Crie a struct pq.
    struct pq{
        Event** eventos;
        int ulti;
        int max;
    };

/*
 * Cria uma nova fila de prioridade mínima com o limite de elementos informado.
 */
PQ* PQ_create(int max_N) {
    // TODO: Implemente a criação da fila que suporta no máximo o número de
    //       de eventos informados no parâmetro.
    PQ* p = (PQ*)malloc(sizeof(PQ));
    //Os eventos irão começar na posição 1 para q o calculo do filho seja
    //possivel, pois 0*2 = 0, assim n seria possivel ver os filhos da raiz
    //da heap
    p->eventos = (Event**)malloc( sizeof(Event*) * (max_N+1) );
    p->ulti = 0;
    p->max = max_N + 1;

    for(int i = 0; i < p->max; i++){
        p->eventos[i] = NULL;
    }

    return p;
}

/*
 * Libera a memória da fila.
 */
void PQ_destroy(PQ *pq) {
    // TODO: Implemente essa função que libera toda a memória da fila,
    //       destruindo inclusive os eventos que estavam na fila.
    //olhar aqui caso de segfault
    for(int i = 0; i <= pq->max; i++){
        destroy_event(pq->eventos[i]);
    }

    free(pq->eventos);
    free(pq);
}

//fixUP
void fixUp(PQ *pq){
    int filho = pq->ulti, pai = pq->ulti/2;

    while( filho > 1 && get_time(pq->eventos[filho]) < get_time(pq->eventos[pai]) ){
        swapEvent(pq->eventos[pai], pq->eventos[filho]);
        pai = pai/2;
        filho = filho/2;
    }
}

/*
 * Insere o evento na fila segundo o seu tempo.
 */
void PQ_insert(PQ *pq, Event *e) {
    // TODO: Implemente essa função que insere o evento dado na fila segundo
    //       o tempo do evento.
    //       Assuma que 'e' não é nulo. É importante testar overflow (inserção
    //       em uma fila que já contém o número máximo de eventos) para evitar
    //       dores de cabeça com acessos inválidos na memória.
    if(pq->max <= pq->ulti) return;

    pq->eventos[++pq->ulti] = e;
    fixUp(pq);

}

void fixDown(PQ* pq, int k){

    while( 2*k <= pq->ulti ){
        if( get_time(pq->eventos[k*2]) < get_time(pq->eventos[k]) ) {
            swapEvent(pq->eventos[k*2], pq->eventos[k]);
            k = k*2;
        }else if( get_time(pq->eventos[ (k*2) + 1]) < get_time(pq->eventos[k]) ){
            swapEvent(pq->eventos[k*2], pq->eventos[k]);
            k = (k*2) + 1;
        }else break;
    }
}

/*
 * Remove e retorna o evento mais próximo.
 */
Event* PQ_delmin(PQ *pq) {
    // TODO: Implemente essa função que remove o evento com o menor tempo da
    //       fila e o retorna.
    Event* e = pq->eventos[1];//pega o evento de menor tempo;
    swapEvent(pq->eventos[1], pq->eventos[pq->ulti]);//troca o primeiro
    //(menor tempo) pelo último (tempo maior q o primeiro)

    pq->eventos[pq->ulti] = NULL; //a ultima posição deve ser posta como nula
    //pois sera sobreescrita ou desconsiderada

    pq->ulti--;//decrescendo o contador para desconsiderar o ultimo elemento
    //pois ele deve ser sobreescrito ou ignorado

    fixDown(pq, 1);//concertando a ordenação da heap alocando a nova raiz
    //em seu devido lugar

    return e;//retorna o menor evento
}

/*
 * Testa se a fila está vazia.
 */
bool PQ_is_empty(PQ *pq) {
    // TODO: Implemente essa função.
    return pq->ulti == 0;
}

/*
 * Retorna o tamanho da fila.
 */
int PQ_size(PQ *pq) {
    // TODO: Implemente essa função.
    return pq->ulti;
}
