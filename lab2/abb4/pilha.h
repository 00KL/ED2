

typedef struct pilha{
    void* info;
    struct pilha* prox;
} pilha;


typedef struct sentinela{
    pilha* topo;
}sentinela;



sentinela* criapilhaVazia();

void push(void* , sentinela* );

void* pop(sentinela* y);

int ispilhaVazia(sentinela* x);
