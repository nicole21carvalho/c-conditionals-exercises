/* Exercício 5: diz se a pessoa pode votar este ano (16 anos ou mais). */
#include "entrada.h"

#define IDADE_MINIMA_VOTO 16

int main(void) {
    configurar_console();

    int ano_atual = ler_int("Digite o ano atual: ");
    int ano_nascimento = ler_int("Digite o ano de nascimento: ");

    if (ano_nascimento > ano_atual) {
        printf("O ano de nascimento não pode ser depois do ano atual.\n");
        return 1;
    }

    int idade = ano_atual - ano_nascimento;
    if (idade >= IDADE_MINIMA_VOTO) {
        printf("A pessoa completa %d anos e pode votar este ano.\n", idade);
    } else {
        printf("A pessoa completa %d anos e ainda não pode votar este ano.\n", idade);
    }
    return 0;
}
