#include <stdio.h>

int main() {

    int senhas_atendimento[5];

    
    for(int i = 0; i < 5; i++) {
        senhas_atendimento[i] = 101 + i;
    }

    
    for(int i = 0; i < 5; i++) {
        printf("Senha %d: %d\n", i, senhas_atendimento[i]);
    }

    
    printf("\nEndereco de senhas_atendimento[0]: %p\n", &senhas_atendimento[0]);
    printf("Endereco de senhas_atendimento[1]: %p\n", &senhas_atendimento[1]);

    return 0;
}