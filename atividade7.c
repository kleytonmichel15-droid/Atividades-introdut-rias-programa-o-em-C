#include <stdio.h>

int main() {
    float notaCliente;      // nota do cliente atual (0 a 10)
    float somaNotas = 0;    // acumula as notas para calcular a média
    float mediaGeral;       // média geral das notas
    int cliente;            // contador do laço

    // Lê a nota de 10 clientes
    for (cliente = 1; cliente <= 10; cliente++) {
        printf("Nota do cliente %d (0 a 10): ", cliente);
        scanf("%f", &notaCliente);

        // Se a nota for inválida, pede novamente
        while (notaCliente < 0 || notaCliente > 10) {
            printf("Nota invalida! Digite um valor entre 0 e 10: ");
            scanf("%f", &notaCliente);
        }

        // Soma a nota ao total
        somaNotas = somaNotas + notaCliente;
    }

    // Média = soma das notas dividida pelo número de clientes
    mediaGeral = somaNotas / 10;

    printf("\nMedia geral do atendimento: %.2f\n", mediaGeral);

    // Se a média for menor que 7, mostra o alerta
    if (mediaGeral < 7) {
        printf("ALERTA: a media esta abaixo de 7! O atendimento precisa melhorar.\n");
    }

    return 0;
}
