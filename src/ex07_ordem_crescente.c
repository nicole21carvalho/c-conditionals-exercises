/* Exercício 7: mostra dois valores em ordem crescente. */
#include "entrada.h"

int main(void) {
    configurar_console();

    int v1 = ler_int("Digite o primeiro valor: ");
    int v2 = ler_int("Digite o segundo valor: ");

    int menor = (v1 < v2) ? v1 : v2;
    int maior = (v1 < v2) ? v2 : v1;

    printf("Valores em ordem crescente: %d, %d\n", menor, maior);
    return 0;
}
