#include <stdbool.h>

int contar_valores_diferentes(int v[], int n) {
    bool valores[1000] = {false};
    int contador = 0;

    for (int i = 0; i < n; i++) {
        if (!valores[v[i]]) {
            valores[v[i]] = true;
            contador++;
        }
    }

    return contador;
}

int main(){
    int n;
    printf("\nentre o numero de elementos a ser analizados: ");
    scanf("%d", &n);
    int vetor[n];
    for (int i = 0; i < n; i++) {
        printf("Valor para a posicao %d: ", i);
        if (scanf("%d", &vetor[i]));
    }
    int contador = contar_valores_diferentes(vetor, n);
    printf("a quantidade de inteiros diferentes e de : %d\n", contador);
    return 0;
}