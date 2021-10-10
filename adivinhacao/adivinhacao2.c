#include <stdio.h>

int main(){
    // imprime cabeçalho do jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;
    int ganhou = 0;
    int tentativas = 0;

    while (ganhou == 0){
        printf("Tentativa %d\n", tentativas + 1);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        
        if(chute < 0){
            printf("Você não pode chutar números negativos!\n");

            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if(acertou){
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo! Você é um bom jogador!\n");
            ganhou = 1;
        } else if (maior){
            printf("Seu chute foi maior que o número secreto!\n");
        } else {
            printf("Seu chute foi menor que o número secreto!\n");
        }

        tentativas++;
    }

    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas!\n", tentativas);
}