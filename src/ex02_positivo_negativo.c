/* Exercício 2: diz se um valor é positivo, negativo ou zero. */
#include "entrada.h"

int main(void) {
    configurar_console();

    int valor = ler_int("Digite um valor: ");

    /* O zero não é positivo nem negativo, então tem um caso próprio. */
    if (valor > 0) {
        printf("O valor é positivo.\n");
    } else if (valor < 0) {
        printf("O valor é negativo.\n");
    } else {
        printf("O valor é zero.\n");
    }
    return 0;
}
