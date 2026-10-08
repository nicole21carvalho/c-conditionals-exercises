/* Exercício 4: calcula a média de duas notas e diz se o aluno foi aprovado. */
#include "entrada.h"

#define MEDIA_APROVACAO 7.0

double ler_nota(const char *mensagem) {
    for (;;) {
        double nota = ler_double(mensagem);
        if (nota >= 0 && nota <= 10) {
            return nota;
        }
        printf("A nota deve estar entre 0 e 10.\n");
    }
}

int main(void) {
    configurar_console();

    double nota1 = ler_nota("Digite a nota da 1ª avaliação: ");
    double nota2 = ler_nota("Digite a nota da 2ª avaliação: ");
    double media = (nota1 + nota2) / 2.0;

    printf("A média das notas é: %.2f\n", media);
    printf("O aluno %s.\n", media >= MEDIA_APROVACAO ? "foi aprovado" : "não foi aprovado");
    return 0;
}
