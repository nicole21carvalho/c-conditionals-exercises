/* Exercício 10: calcula o peso ideal pela altura e pelo sexo.
   Homens: 72,7 × altura − 58      Mulheres: 62,1 × altura − 44,7 */
#include "entrada.h"

double peso_ideal(double altura, char sexo) {
    if (sexo == 'M') {
        return 72.7 * altura - 58;
    }
    return 62.1 * altura - 44.7;
}

int main(void) {
    configurar_console();

    char nome[100];
    do {
        ler_linha("Digite o nome: ", nome, sizeof nome);
    } while (nome[0] == '\0');

    double altura;
    for (;;) {
        altura = ler_double("Digite a altura em metros: ");
        if (altura > 0.5 && altura < 2.6) break;
        printf("Digite uma altura entre 0,5 e 2,6 metros.\n");
    }

    char sexo = ler_opcao("Digite o sexo (M = masculino, F = feminino): ", "MF");

    printf("\nNome: %s\n", nome);
    printf("Altura: %.2f m\n", altura);
    printf("Sexo: %s\n", sexo == 'M' ? "masculino" : "feminino");
    printf("Peso ideal: %.2f kg\n", peso_ideal(altura, sexo));
    return 0;
}
