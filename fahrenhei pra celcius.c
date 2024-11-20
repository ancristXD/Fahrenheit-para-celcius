#include <stdio.h>
int main() {
    // Variáveis para armazenar a temperatura em Celsius e Fahrenheit
    float c, f;

    // Solicita ao usuário que insira a temperatura em Celsius
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    // Converte a temperatura para Fahrenheit usando a fórmula correta
    c = (f - 32) * (5.0 / 9.0);

    // Exibe o resultado
    printf("A temperatura em Celsius é: %.2f\n", c);

    return 0;
}
