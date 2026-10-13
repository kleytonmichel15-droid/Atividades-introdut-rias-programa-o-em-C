#include <stdio.h>

int main() {
    int escolha;            // opção escolhida pelo usuário
    float saldo = 0;        // saldo acumulado no cofrinho

    // O laço repete até o usuário escolher a opção 0 (parar)
    do {
        printf("=== COFRINHO DIGITAL ===\n");
        printf("1 - Adicionar R$0,50\n");
        printf("2 - Adicionar R$1,00\n");
        printf("3 - Adicionar R$2,00\n");
        printf("0 - Parar e mostrar total\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        // Soma o valor da moeda escolhida ao saldo
        switch (escolha) {
            case 1:
                saldo = saldo + 0.50;
                break;
            case 2:
                saldo = saldo + 1.00;
                break;
            case 3:
                saldo = saldo + 2.00;
                break;
            case 0:
                // Não faz nada, apenas sai do laço
                break;
            default:
                printf("Opcao invalida!\n");
        }

        // Mostra o saldo atual após cada moeda adicionada
        if (escolha >= 1 && escolha <= 3) {
            printf("Saldo atual: R$ %.2f\n", saldo);
        }

        printf("\n");

    } while (escolha != 0);

    // Exibe o total final
    printf("Total acumulado no cofrinho: R$ %.2f\n", saldo);

    return 0;
}
