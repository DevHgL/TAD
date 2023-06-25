#include "stdio.h"
#include "stdlib.h"
#include "fila.h"

struct Fila{
    int ini;
    int fim;
    int v[100];
};

fila inicializaFila(){
    fila p = (fila) malloc(sizeof(struct Fila));
    p->ini = 0;
    p->fim = 0;
    return p;
}

void insereFila(fila p, int info){
    p->v[p->fim] = info;
    p->fim = (p->fim+1)%100;
}

int removeFila(fila p){
    if (!esvaziaFila(p)){
        int info = p->v[p->ini];
        p->ini = (p->ini+1)%100;
        return info;
    }
    else{
        return -1;
    }
}

int esvaziaFila(fila p){
    return (p->ini == p->fim);
}

void imprimeFila(fila p){
    printf("[ ");
    int i = p->ini;
    while(i!=p->fim){
        printf("%d ", p->v[i]);
        i = (i+1)%100;
    }
    printf("]\n");
}

void destroiFila(fila p){
    free(p);
}

void menu(){
    printf(" 1. Inserir um elemento na fila\n");
    printf(" 2. Remover um elemento da fila (imprimir o elemento removido)\n");
    printf(" 3. Imprimir a fila\n");
    printf(" 4. Sair\n");
}