#ifndef FILA_H
#define FILA_H

typedef struct Fila *fila;
// Inicializa e retorna uma fila vazia com espaco para 100 inteiros
fila inicializaFila(void);
// Insere um elemento no final da fila
void insereFila(fila p, int info);
// Imprime todos os elementos da fila
void imprimeFila(fila p);
// Retorna o elemento removido (-1 se a fila estiver vazia)
int removeFila(fila p);
// Retorna 1 (vazia) ou 0( não vazia)
int esvaziaFila(fila p);
// Destroi todos os elementos da fila
void destroiFila(fila p);
// Menu referente às opções do programa
void menu();

#endif