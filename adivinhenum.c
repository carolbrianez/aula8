#include <stdio.h>

int main(void) {
    int num;
    int tentativas = 3;
    int numcorreto = 7;

    do {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num == numcorreto) {
            printf("Você ganhou!\n");
            break;
        } else {
            tentativas--;
            if (tentativas > 0) {
                printf("Número errado. Tentativas restantes: %d\n", tentativas);
            } else {
                printf("Fim de jogo!\n");
            }
        }
    } while (tentativas > 0);

    return 0;
}