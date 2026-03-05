#include <stdio.h>
#include <stdlib.h>

struct Departamento {
    int id_departamento;
    int qtd_funcionarios;
    int *matriculas_funcionarios;
};

int main() {

    struct Departamento ti; 

    ti.id_departamento = 404;

    printf("Quantos funcionarios trabalham na TI hoje? ");
    scanf("%d", &ti.qtd_funcionarios);

    ti.matriculas_funcionarios = (int*) malloc(ti.qtd_funcionarios * sizeof(int));

    if (ti.matriculas_funcionarios == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < ti.qtd_funcionarios; i++) {
        ti.matriculas_funcionarios[i] = 2000 + i;
    }

    printf("\nDepartamento ID: %d\n", ti.id_departamento);
    printf("Matriculas dos funcionarios:\n");

    for (int i = 0; i < ti.qtd_funcionarios; i++) {
        printf("Funcionario %d: %d\n", i + 1, ti.matriculas_funcionarios[i]);
    }

    free(ti.matriculas_funcionarios);

    return 0;
}