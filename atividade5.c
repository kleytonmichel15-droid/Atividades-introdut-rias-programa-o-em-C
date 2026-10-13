#include <stdio.h>

int main() {
    float consumoMorador;   // consumo de água do morador atual (m³)
    float consumoTotal = 0; // acumula o consumo total para calcular a média
    float consumoMedio;     // consumo médio geral
    int morador;            // contador do laço

    // Lê o consumo dos 5 moradores
    for (morador = 1; morador <= 5; morador++) {
        printf("Consumo do morador %d (m3): ", morador);
        scanf("%f", &consumoMorador);

        // Soma o consumo atual ao total
        consumoTotal = consumoTotal + consumoMorador;

        // Verifica se o consumo está dentro do limite de 20 m³
        if (consumoMorador <= 20) {
            printf("Morador %d: consumo dentro da media.\n\n", morador);
        } else {
            printf("Morador %d: consumo ACIMA da media.\n\n", morador);
        }
    }

    // Média geral = total consumido dividido pelo número de moradores
    consumoMedio = consumoTotal / 5;

    printf("Consumo medio geral: %.2f m3\n", consumoMedio);

    return 0;
}
