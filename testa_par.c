#include <stdio.h>
 
int testa_par (int x) {
    return x % 2;
}
int main (void) {
    int resultado = testa_par (4);
    printf ("4 é par? %d", !resultado);
    
    int resultadoi = testa_par (5);
    printf ("\n5 é par? %d", resultado);
}