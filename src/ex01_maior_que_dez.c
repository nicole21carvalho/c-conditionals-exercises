/* Exercício 1: diz se um valor é maior que 10. */
#include "entrada.h"

int main(void) {
    configurar_console();

    int valor = ler_int("Digite um valor: ");

    if (valor > 10) {
        printf("%d é maior que 10.\n", valor);
    } else {
        printf("%d não é maior que 10.\n", valor);
    }
    return 0;
}
