/* Exercício 9: calcula o salário do mês pelas horas trabalhadas.
   Até 160 horas (40 por semana × 4) é hora normal; o que passar disso
   é hora extra, paga com 50% a mais. */
#include "entrada.h"

#define HORAS_NORMAIS_NO_MES (40 * 4)
#define ADICIONAL_HORA_EXTRA 1.5

double salario_mensal(double horas_trabalhadas, double valor_hora) {
    double horas_normais = horas_trabalhadas;
    double horas_extras = 0;

    if (horas_trabalhadas > HORAS_NORMAIS_NO_MES) {
        horas_normais = HORAS_NORMAIS_NO_MES;
        horas_extras = horas_trabalhadas - HORAS_NORMAIS_NO_MES;
    }
    return horas_normais * valor_hora + horas_extras * valor_hora * ADICIONAL_HORA_EXTRA;
}

int main(void) {
    configurar_console();

    double horas = ler_double("Digite o número total de horas trabalhadas no mês: ");
    double valor_hora = ler_double("Digite o salário por hora: R$ ");

    if (horas < 0 || valor_hora < 0) {
        printf("As horas e o salário por hora não podem ser negativos.\n");
        return 1;
    }

    printf("O salário total do funcionário é: R$ %.2f\n", salario_mensal(horas, valor_hora));
    return 0;
}
