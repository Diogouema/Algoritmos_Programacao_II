#include <stdio.h>
#include <stdbool.h>

int divisiveis(int arr[], int tam, int x, int soma) {
    if (tam == 0) {
        return soma;
    } else {
        int resto = arr[tam - 1] % x;
        if (resto == 0) {
            soma += arr[tam - 1];
        }
        return divisiveis(arr, tam - 1, x, soma);
    }
}

void mostrar(int arr[], int tam) {
    printf("[ ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main() {
    int array[] = {21, 27, 33, 60};
    int n = sizeof(array) / sizeof(array[0]);
    mostrar(array, n);
    printf("Valor de x: ");
    int x;
    if (scanf("%d", &x) != 1) {
        return 1;
    }
    int soma = divisiveis(array, n, x, 0);
    printf("A soma dos números divisíveis por %d é %d.\n", x, soma);
    return 0;
}
