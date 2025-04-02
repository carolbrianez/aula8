#include <stdio.h>

int main() {
    int num;
    int somanum = 0;

    printf("Digite um número de 1 a 6 (valor do dado jogado):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num < 1) {
            printf("Número inválido! Por favor, digite um número de 1 a 6.\n");
            continue;
        }
        if (num > 6) {
            printf("Número inválido! Por favor, digite um número de 1 a 6.\n");
            continue;
        }

        if (num % 2 == 1) {
            break;
        }

        somanum += num;
    }

    printf("O jogo terminou. A soma total dos números pares digitados é: %d\n", somanum);

    return 0;
}