#include <stdio.h>

int main(void) {
    int A;
    int B;

    printf("Tabela Verdade\n");
    printf("----------------------------\n");

    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            printf("A: %d B: %d   %d && %d = %d\n", A, B, A, B, A && B);
        }
    }

    return 0;
}
