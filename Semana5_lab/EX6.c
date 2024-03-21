#include <stdio.h>

int busca_qtde(int v[], int n, int e) {
    int qtde = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            qtde++;
        }
    }
    return qtde;
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
    int qtde = busca_qtde(vetor, n, e);
    printf("O elemento %d aparece %d vezes no vetor.\n", e, qtde);
    return 0;
}