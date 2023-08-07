/*
Construa um programa para ler uma matriz 5 x 10 que indica as respostas de cinco alunos para 10
questões de múltiplas escolhas. O programa deve ler também um vetor de 10 posições contendo o
gabarito de respostas que podem ser a, b, c ou d. O programa deverá comparar as respostas de cada
candidato com o gabarito e emitir um vetor denominado resultado, contendo a pontuação correspondente
a cada aluno. */
#include <stdio.h>
#define alunos 2
#define questoes 3
int main()
{
    char matriz[alunos][questoes], gabarito[questoes], contador = 0,
                                                       acertos[alunos];
    for (int i = 0; i < questoes; i++)
    {
        printf("Digite a resposta da %d questao: ", i);
        scanf("%c", &gabarito[i]);
    }
    for (int i = 0; i < alunos; i++)
    {
        for (int j = 0; j < questoes; j++)
        {
            printf("Digite a alternativa correta: a,b, c ou d ");
            scanf("%c", &matriz[i][j]);
            if (matriz[i][j] == gabarito[i])
            {
                contador++;
            }
            acertos[i] = contador;
        }
    }
    return 0;
}