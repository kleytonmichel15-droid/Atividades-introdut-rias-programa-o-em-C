#include <stdio.h>

int main() {
    int escolha, numero;

    for (;;) {
        printf("\n===== MENU =====\n");
        printf("1 - Verificar numero par ou impar\n");
        printf("2 - Verificar se e positivo ou negativo\n");
        printf("3 - Calcular o quadrado do numero\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Numero: ");
                scanf("%d", &numero);
                if (numero % 2 == 0)
                    printf("O numero %d e par\n", numero);
                else
                    printf("O numero %d e impar\n", numero);
                if (numero > 0)
                    printf("O numero %d e positivo\n", numero);
                else if (numero < 0)
                    printf("O numero %d e negativo\n", numero);
                else
                    printf("O numero e zero\n");
                break;
            case 2:
                printf("Numero: ");
                scanf("%d", &numero);
                if (numero > 0)
                    printf("O numero %d e positivo\n", numero);
                else if (numero < 0)
                    printf("O numero %d e negativo\n", numero);
                else
                    printf("O numero e zero\n");
                break;
            case 3:
                printf("Numero: ");
                scanf("%d", &numero);
                printf("O quadrado de %d e %d\n", numero, numero * numero);
                break;
            case 4:
                printf("Encerrando o programa\n");
                return 0;
            default:
                printf("Opcao invalida\n");
        }
    }
}
