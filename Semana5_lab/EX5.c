#include <stdio.h>

int busca_ultimo(int v[], int n, int e) {
    int indice = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            indice = i; 
        }
    }
    return indice; 
}

int main(){
    int n, e;
    printf("digite o elemento a ser verificado se esta presente na lista: ");
    scanf("%d", &e);
    printf("\nentre o numero de elementos a ser analizados: ");
    scanf("%d", &n);
    int vetor[n];
    for (int i = 0; i < n; i++) {
        printf("Valor para a posicao %d: ", i);
        if (scanf("%d", &vetor[i]));
    }
    int indice = busca_ultimo(vetor, n, e);
    if (indice != -1) {
        printf("O elemento %d foi encontrado pela ultima vez no índice %d.\n", e, indice);
    } else {
        printf("O elemento %d não foi encontrado no vetor.\n", e);
    }
    return 0;
}