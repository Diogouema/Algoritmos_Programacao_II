#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*int main() {
    int dado, palpite;
    srand(time(NULL));
    dado = rand() % 100 + 1; 

    while (1) {
        printf("Digite seu palpite (entre 1 e 100): ");
        if (scanf("%d", &palpite) != 1 || palpite < 1 || palpite > 100) {
            printf("Valor inválido. Por favor, digite um número entre 1 e 100.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;
        }

        if (palpite == dado) {
            printf("Parabéns!!! Você acertou!\n");
            break;
        } else if (palpite < dado) {
            printf("Você chutou muito baixo! O valor correto é %d.\n", dado);
        } else {
            printf("Você chutou muito alto! O valor correto é %d.\n", dado);
        }
    }

    return 0;
}*/
