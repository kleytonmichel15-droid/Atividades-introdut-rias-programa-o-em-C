#include <stdio.h>

int main() {
    int lado1, lado2, lado3, aux, menor, medio, maior;
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0 || lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1) {
        printf("Os valores nao formam um triangulo\n");
        return 0;
    }

    if (lado1 == lado2 && lado2 == lado3)
        printf("Equilatero\n");
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        printf("Isosceles\n");
    else
        printf("Escaleno\n");

    menor = lado1; medio = lado2; maior = lado3;
    if (menor > maior) { aux = menor; menor = maior; maior = aux; }
    if (medio > maior) { aux = medio; medio = maior; maior = aux; }

    if (menor * menor + medio * medio == maior * maior)
        printf("Retangulo\n");
    else if (menor * menor + medio * medio > maior * maior)
        printf("Acutangulo\n");
    else
        printf("Obtusangulo\n");

    return 0;
}
