/* Exercício 11: calcula o salário de um vendedor com comissão.
   3% sobre as vendas até R$ 1.500,00 e 5% sobre o que passar disso. */
#include "entrada.h"

#define FAIXA_VENDAS 1500.00
#define COMISSAO_FAIXA 0.03
#define COMISSAO_ACIMA 0.05

double comissao(double vendas) {
    if (vendas <= FAIXA_VENDAS) {
        return vendas * COMISSAO_FAIXA;
    }
    return FAIXA_VENDAS * COMISSAO_FAIXA + (vendas - FAIXA_VENDAS) * COMISSAO_ACIMA;
}

int main(void) {
    configurar_console();

    double salario_fixo = ler_double("Digite o salário fixo do vendedor: R$ ");
    double vendas = ler_double("Digite o valor das vendas efetuadas: R$ ");

    if (salario_fixo < 0 || vendas < 0) {
        printf("Os valores não podem ser negativos.\n");
        return 1;
    }

    double valor_comissao = comissao(vendas);
    printf("Comissão: R$ %.2f\n", valor_comissao);
    printf("O salário total do vendedor é: R$ %.2f\n", salario_fixo + valor_comissao);
    return 0;
}
