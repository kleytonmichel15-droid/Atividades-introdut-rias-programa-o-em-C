#include <stdio.h>

int main() {
    int passosHora;             // passos dados na hora atual
    int totalPassos = 0;        // total de passos acumulados
    int horasRegistradas = 0;   // quantidade de horas registradas

    // O laço repete enquanto o total for menor que a meta de 10.000
    while (totalPassos < 10000) {
        horasRegistradas = horasRegistradas + 1;  // conta mais uma hora

        printf("Passos dados na hora %d: ", horasRegistradas);
        scanf("%d", &passosHora);

        // Soma os passos da hora ao total
        totalPassos = totalPassos + passosHora;

        printf("Total ate agora: %d passos\n\n", totalPassos);
    }

    // Quando sai do laço, a meta foi atingida ou ultrapassada
    printf("Meta atingida! Total de passos: %d\n", totalPassos);
    printf("Horas necessarias: %d\n", horasRegistradas);

    return 0;
}
