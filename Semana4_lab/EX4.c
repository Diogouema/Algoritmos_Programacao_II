#include <stdio.h>
#include <stdbool.h>

bool ehdivisor(int N, int D) {
    if (N % D != 0) {
        return false;
    }
    if (N % D == 0) {
        return true;
    }
    return false;
}

int qtd_divisores(int N) {
    int cont = 0;
    for (int i = 1; i <= N; i++) {
        if (ehdivisor(N, i)) { cont++; }
    }
    return cont;
}

int main() {
    int N, D;
    printf("Digite um numero: ");
    scanf("%d", &N);
    printf("Digite um divisor: ");
    scanf("%d", &D);
    if (ehdivisor(N, D)) {
        printf("%d e um divisor de %d\n", D, N);
      } else {
        printf("%d nao e um divisor de %d\n", D, N);
    }
    printf("o numero %d possui %d divisores", N, qtd_divisores(N));

    return 0;
}