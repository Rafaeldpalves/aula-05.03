#include <stdio.h>

int main() {
    int id_servidor = 10;
    float salario = 3500.50;
    char turno = 'M';

    printf("Valor de id_servidor: %d\n", id_servidor);
    printf("Endereco de id_servidor: %p\n\n", &id_servidor);

    printf("Valor de salario: %.2f\n", salario);
    printf("Endereco de salario: %p\n\n", &salario);

    printf("Valor de turno: %c\n", turno);
    printf("Endereco de turno: %p\n", &turno);

    return 0;
}