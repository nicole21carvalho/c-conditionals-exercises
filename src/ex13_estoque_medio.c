/* Exercício 13: decide se é preciso comprar mais de um produto.
   O estoque médio é a média entre o mínimo e o máximo; abaixo dele, compra. */
#include "entrada.h"

int main(void) {
    configurar_console();

    int atual = ler_int("Digite a quantidade atual em estoque: ");
    int maxima = ler_int("Digite a quantidade máxima em estoque: ");
    int minima = ler_int("Digite a quantidade mínima em estoque: ");

    if (minima > maxima) {
        printf("A quantidade mínima não pode ser maior que a máxima.\n");
        return 1;
    }

    double media = (maxima + minima) / 2.0;
    printf("Quantidade média em estoque: %.2f\n", media);
    printf("%s\n", atual >= media ? "Não efetuar compra" : "Efetuar compra");
    return 0;
}
