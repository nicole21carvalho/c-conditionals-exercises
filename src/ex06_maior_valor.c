/* Exercício 6: mostra o maior entre dois valores. */
#include "entrada.h"

int main(void) {
    configurar_console();

    int v1 = ler_int("Digite o primeiro valor: ");
    int v2 = ler_int("Digite o segundo valor: ");

    if (v1 == v2) {
        printf("Os dois valores são iguais: %d\n", v1);
    } else {
        printf("O maior valor é: %d\n", (v1 > v2) ? v1 : v2);
    }
    return 0;
}
