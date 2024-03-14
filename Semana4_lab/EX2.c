#include <stdio.h>

float c2f(float celsius) {
    return celsius * 9/5 + 32;
}

float f2c(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    int escolha;
    float temperatura, resultado;

    printf("Escolha a conversão que deseja fazer:\n");
    printf("1. Converter de Celsius para Fahrenheit\n");
    printf("2. Converter de Fahrenheit para Celsius\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temperatura);
        resultado = c2f(temperatura);
        printf("%.2f°C é igual a %.2f°F\n", temperatura, resultado);
    } else if (escolha == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temperatura);
        resultado = f2c(temperatura);
        printf("%.2f°F é igual a %.2f°C\n", temperatura, resultado);
    } else {
        printf("Escolha inválida. Por favor, escolha 1 ou 2.\n");
    }

    return 0;
}
