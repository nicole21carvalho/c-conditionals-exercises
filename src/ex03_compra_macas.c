/* Exercício 3: calcula o custo de uma compra de maçãs.
   Menos de uma dúzia custa R$ 1,30 cada; a partir de 12, R$ 1,00 cada. */
#include "entrada.h"

#define DUZIA 12
#define PRECO_UNIDADE 1.30
#define PRECO_ATACADO 1.00

double custo_macas(int quantidade) {
    double preco = (quantidade < DUZIA) ? PRECO_UNIDADE : PRECO_ATACADO;
    return quantidade * preco;
}

int main(void) {
    configurar_console();

    int quantidade = ler_int("Digite o número de maçãs compradas: ");
    if (quantidade < 0) {
        printf("A quantidade não pode ser negativa.\n");
        return 1;
    }

    printf("O custo total da compra é: R$ %.2f\n", custo_macas(quantidade));
    return 0;
}
