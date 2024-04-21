#include <stdio.h>
#include <stdbool.h>

int divisiveis(int arr[], int tam, int x, int contador) {
    if (tam == 0) {
        return contador;
    } else {
        int resto = arr[tam - 1] % x;
        if (resto == 0) {
            contador++;
        }
        return divisiveis(arr, tam - 1, x, contador);
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
    int quantidade = divisiveis(array, n, x, 0);
    printf("%d números são divisíveis por %d.\n", quantidade, x);
    return 0;
}
