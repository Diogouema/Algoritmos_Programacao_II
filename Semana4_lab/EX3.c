#include <stdio.h>

void tabuada(int N) {
    printf("Tabuada do %d:\n", N);
    for (int i = 1; i <= 9; i++) {
        printf("%2d x %2d = %2d\n", N, i, N * i);
    }
    printf("\n");
}

int main() {
    int N;
    printf("digite o numero que deseja ver a tabuada: \n");
    scanf("%d" , &N);
    tabuada(N);
    return 0;
}
