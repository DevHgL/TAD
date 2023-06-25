#include "stdio.h"
#include "fila.h"

int main(){

    fila p = inicializaFila();
    int opcao;
    while(1){
        printf("Menu: \n");
        menu();
        scanf("%d", &opcao);
        switch (opcao){
            case 1:{
                printf("Digite o numero a ser inserido:\n");
                int num;
                scanf("%d", &num);
                insereFila(p, num);
                break;
            }
            case 2:{
                int elem = removeFila(p);
                (elem == -1) ? printf("Impossivel remover de uma fila vazia\n") : printf("O elemento removido foi: %d\n", elem);
                break;
            }
            case 3:{
                imprimeFila(p);
                break;
            }
            case 4:{
                destroiFila(p);
                return(0);
            }
            default:
                break;
        }
    }
}