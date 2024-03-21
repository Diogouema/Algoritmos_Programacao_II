#include <stdbool.h>
#include <stdio.h>

bool contem(int v[], int n, int e){
    for(int i = 0; i <= n ; i++){
        if(v[i] == e){
            return true;
        }
    }
    return false;
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
     if (contem(vetor, n, e)) {printf("o valor %d esta presente nessa lista", e);}
     else {printf("o valor %d nao esta presente nessa lista\n", e); }
     return 0;
}

