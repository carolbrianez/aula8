#include <stdio.h>

int main(void) {
    int num;
    int somanum = 0;

    printf("Digite o número de 1 a 6 (valor do dado jogado):\n");

    while (1) {
        scanf("%d", &num);
        
        if (num < 1) {
            printf("Número inválido! Por favor, digite um número de 1 a 6.\n");
        } else if (num > 6) {
            printf("Número inválido! Por favor, digite um número de 1 a 6.\n");
        } else if (num % 2 == 1) {
            break;
        } else {
            somanum += num;
        }
    }

    printf("O jogo terminou. A soma total dos números pares digitados é: %d\n", somanum);

    return 0;
}
