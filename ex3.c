#include <stdio.h>
#include <stdlib.h>

int main() {

    int *protocolo_urgente;

    // Alocando memória dinamicamente para um inteiro
    protocolo_urgente = (int*) malloc(sizeof(int));

    // Guardando o valor no espaço alocado
    *protocolo_urgente = 999;

    // Imprimindo o valor
    printf("Valor do protocolo urgente: %d\n", *protocolo_urgente);

    // Liberando a memória
    free(protocolo_urgente);

    return 0;
}