/*F6 para compilar*/

#include <stdio.h>

float somar(float a, float b, float c) {
    return a + b + c;
}

int main() {
    printf("Primeiro numero: ");
    float n1;
    scanf("%f", &n1);
    printf("Segundo numero: ");
    float n2;
    scanf("%f", &n2);
    printf("Terceiro numero: ");
    float n3;
    scanf("%f", &n3);
    printf("Soma: %.2f\n", somar(n1, n2, n3));
    return 0;
}