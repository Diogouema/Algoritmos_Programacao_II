#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*int main() {
    int dado, palpite, tentativas = 0;
    srand(time(NULL)); // Inicializa a semente para geração de números aleatórios
    dado = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100

    while (1) {
        printf("Digite seu palpite (entre 1 e 100): ");
        if (scanf("%d", &palpite) != 1 || palpite < 1 || palpite > 100) {
            printf("Valor inválido. Por favor, digite um número entre 1 e 100.\n");
            while (getchar() != '\n'); 
            continue;
        }

        tentativas++;

        if (palpite == dado) {
            printf("Parabéns!!! Você acertou em %d tentativas.\n", tentativas);
            break;
        } else if (palpite < dado) {
            printf("Você chutou muito baixo!\n");
        } else {
            printf("Você chutou muito alto!\n");
        }
    }

    return 0;
}*/
