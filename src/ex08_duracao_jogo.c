/* Exercício 8: calcula a duração de um jogo pela hora de início e de fim.
   O jogo pode virar a meia-noite e dura no máximo 24 horas. */
#include "entrada.h"

int ler_hora(const char *mensagem) {
    for (;;) {
        int hora = ler_int(mensagem);
        if (hora >= 0 && hora <= 23) {
            return hora;
        }
        printf("A hora deve estar entre 0 e 23.\n");
    }
}

int duracao_jogo(int inicio, int fim) {
    if (fim > inicio) {
        return fim - inicio;
    }
    /* Mesmo horário = o jogo durou o dia inteiro. Fim menor = virou a meia-noite. */
    return 24 - inicio + fim;
}

int main(void) {
    configurar_console();

    int inicio = ler_hora("Digite a hora de início do jogo (0 a 23): ");
    int fim = ler_hora("Digite a hora de fim do jogo (0 a 23): ");

    int duracao = duracao_jogo(inicio, fim);
    printf("O jogo durou %d hora%s.\n", duracao, duracao == 1 ? "" : "s");
    return 0;
}
