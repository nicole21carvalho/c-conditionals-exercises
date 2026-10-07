/* Exercício 12: calcula o saldo de uma conta depois de um débito e um crédito. */
#include "entrada.h"

int main(void) {
    configurar_console();

    int conta = ler_int("Digite o número da conta do cliente: ");
    double saldo = ler_double("Digite o saldo atual: R$ ");
    double debito = ler_double("Digite o valor do débito: R$ ");
    double credito = ler_double("Digite o valor do crédito: R$ ");

    if (debito < 0 || credito < 0) {
        printf("Débito e crédito não podem ser negativos.\n");
        return 1;
    }

    double saldo_final = saldo - debito + credito;

    printf("\nConta: %d\n", conta);
    printf("Saldo atual: R$ %.2f\n", saldo_final);
    if (saldo_final > 0) {
        printf("Saldo positivo\n");
    } else if (saldo_final < 0) {
        printf("Saldo negativo\n");
    } else {
        printf("Saldo zerado\n");
    }
    return 0;
}
