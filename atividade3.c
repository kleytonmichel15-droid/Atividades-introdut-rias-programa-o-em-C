#include <stdio.h>

int main() {
    int numeros[3], idx1, idx2, maiorValor, menorValor, valorMeio = 0, encontrouMeio = 0;
    int qtdMenorIgual, qtdMaiorIgual, repeticoes = 0, ehCrescente = 1, ehDecrescente = 1;

    for (idx1 = 0; idx1 < 3; idx1++)
        scanf("%d", &numeros[idx1]);

    maiorValor = numeros[0];
    menorValor = numeros[0];
    for (idx1 = 1; idx1 < 3; idx1++) {
        if (numeros[idx1] > maiorValor)
            maiorValor = numeros[idx1];
        if (numeros[idx1] < menorValor)
            menorValor = numeros[idx1];
    }

    for (idx1 = 0; idx1 < 3 && !encontrouMeio; idx1++) {
        qtdMenorIgual = 0;
        qtdMaiorIgual = 0;
        for (idx2 = 0; idx2 < 3; idx2++) {
            if (numeros[idx2] <= numeros[idx1])
                qtdMenorIgual++;
            if (numeros[idx2] >= numeros[idx1])
                qtdMaiorIgual++;
        }
        if (qtdMenorIgual >= 2 && qtdMaiorIgual >= 2) {
            valorMeio = numeros[idx1];
            encontrouMeio = 1;
        }
    }

    for (idx1 = 0; idx1 < 3; idx1++)
        for (idx2 = idx1 + 1; idx2 < 3; idx2++)
            if (numeros[idx1] == numeros[idx2])
                repeticoes++;

    for (idx1 = 0; idx1 < 2; idx1++) {
        if (numeros[idx1] >= numeros[idx1 + 1])
            ehCrescente = 0;
        if (numeros[idx1] <= numeros[idx1 + 1])
            ehDecrescente = 0;
    }

    printf("Maior: %d\n", maiorValor);
    printf("Menor: %d\n", menorValor);
    printf("Intermediario: %d\n", valorMeio);

    if (repeticoes == 3)
        printf("Os tres valores sao iguais\n");
    else if (repeticoes > 0)
        printf("Existem valores repetidos\n");
    else
        printf("Nao existem valores repetidos\n");

    if (ehCrescente)
        printf("Ordem crescente\n");
    else if (ehDecrescente)
        printf("Ordem decrescente\n");
    else
        printf("Nem crescente nem decrescente\n");

    return 0;
}
