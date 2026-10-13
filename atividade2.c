#include <stdio.h>

int main() {
    int valoresNotas[6] = {200, 100, 50, 20, 10, 5};
    int estoque[6], disponivel[6], melhorSaque[6], quantidade[6];
    int valorSaque, indice, somaAtual, totalNotas, menorQtdNotas = -1;

    printf("Informe o estoque de cada nota (200 100 50 20 10 5): ");
    for (indice = 0; indice < 6; indice++)
        scanf("%d", &estoque[indice]);

    printf("Valor do saque: ");
    scanf("%d", &valorSaque);

    if (valorSaque <= 0 || valorSaque % 5 != 0) {
        printf("Valor invalido\n");
        return 0;
    }

    for (indice = 0; indice < 6; indice++) {
        if (estoque[indice] > 0)
            disponivel[indice] = estoque[indice] - 1;
        else
            disponivel[indice] = 0;
    }

    for (quantidade[0] = 0; quantidade[0] <= disponivel[0] && quantidade[0] * valoresNotas[0] <= valorSaque; quantidade[0]++)
    for (quantidade[1] = 0; quantidade[1] <= disponivel[1] && quantidade[1] * valoresNotas[1] <= valorSaque; quantidade[1]++)
    for (quantidade[2] = 0; quantidade[2] <= disponivel[2] && quantidade[2] * valoresNotas[2] <= valorSaque; quantidade[2]++)
    for (quantidade[3] = 0; quantidade[3] <= disponivel[3] && quantidade[3] * valoresNotas[3] <= valorSaque; quantidade[3]++)
    for (quantidade[4] = 0; quantidade[4] <= disponivel[4] && quantidade[4] * valoresNotas[4] <= valorSaque; quantidade[4]++)
    for (quantidade[5] = 0; quantidade[5] <= disponivel[5] && quantidade[5] * valoresNotas[5] <= valorSaque; quantidade[5]++) {
        somaAtual = 0;
        totalNotas = 0;
        for (indice = 0; indice < 6; indice++) {
            somaAtual += quantidade[indice] * valoresNotas[indice];
            totalNotas += quantidade[indice];
        }
        if (somaAtual == valorSaque && (menorQtdNotas == -1 || totalNotas < menorQtdNotas)) {
            menorQtdNotas = totalNotas;
            for (indice = 0; indice < 6; indice++)
                melhorSaque[indice] = quantidade[indice];
        }
    }

    if (menorQtdNotas == -1) {
        printf("Saque impossivel sem violar a reserva de uma nota de cada denominacao\n");
        return 0;
    }

    printf("Saque realizado:\n");
    for (indice = 0; indice < 6; indice++)
        if (melhorSaque[indice] > 0)
            printf("%d nota(s) de R$ %d\n", melhorSaque[indice], valoresNotas[indice]);
    printf("Total de cedulas: %d\n", menorQtdNotas);

    return 0;
}
