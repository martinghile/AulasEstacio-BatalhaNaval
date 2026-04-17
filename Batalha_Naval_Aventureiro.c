#include <stdio.h>

int main()
{
    int matriz[10][10] = {0};
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Navio 1
    int coluna1 = 2;
    int linha1 = 0;
    if (linha1 + 3 <= 9)
    {

        if (matriz[linha1][coluna1] != 0 ||
            matriz[linha1 + 1][coluna1] != 0 ||
            matriz[linha1 + 2][coluna1] != 0 ||
            matriz[linha1 + 3][coluna1] != 0)
        {
            printf("Entrada inválida");
        }
        else
        {
            for (int k = 0; k < 4; k++)
            {
                matriz[linha1 + k][coluna1] = 3;
            }
        }
    }
    else
    {
        printf("ENTRADA INVÁLIDA - NAVIO 1 SAIU DO TABULEIRO");
    }

    // Navio 2
    int coluna2 = 4;
    int linha2 = 4;

    if (coluna2 + 2 <= 9)
    {
        if (matriz[linha2][coluna2] != 0 ||
            matriz[linha2][coluna2 + 1] != 0 ||
            matriz[linha2][coluna2 + 2] != 0)
        {
            printf("Entrada inválida");
        }
        else
        {
            for (int k = 0; k < 3; k++)
            {
                matriz[linha2][coluna2 + k] = 3;
            }
        }
    }
    else
    {
        printf("ENTRADA INVÁLIDA - NAVIO 2 SAIU DO TABULEIRO");
    }

    // Navio 3
    int coluna3 = 0;
    int linha3 = 7;

    if (linha3 - 2 >= 0 && coluna3 + 2 <= 9)
    {

        if (matriz[linha3][coluna3] != 0 ||
            matriz[linha3 - 1][coluna3 + 1] != 0 ||
            matriz[linha3 - 2][coluna3 + 2] != 0)
        {
            printf("Entrada inválida");
        }
        else
        {
            for (int k = 0; k < 3; k++)
            {
                matriz[linha3 - k][coluna3 + k] = 3;
            }
        }
    }
    else
    {
        printf("ENTRADA INVÁLIDA - NAVIO 3 SAIU DO TABULEIRO");
    }

    // Navio 4
    int coluna4 = 5;
    int linha4 = 6;

    if (linha4 + 3 <= 9 && coluna4 + 3 <= 9)
    {

        if (matriz[linha4][coluna4] != 0 ||
            matriz[linha4 + 1][coluna4 + 1] != 0 ||
            matriz[linha4 + 2][coluna4 + 2] != 0 ||
            matriz[linha4 + 3][coluna4 + 3] != 0)
        {
            printf("Entrada inválida");
        }
        else
        {
            for (int k = 0; k < 4; k++)
            {
                matriz[linha4 + k][coluna4 + k] = 3;
            }
        }
    }
    else
    {
        printf("ENTRADA INVÁLIDA - NAVIO 4 SAIU DO TABULEIRO");
    }

    printf("   ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", coluna[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", i);

        for (int j = 0; j < 10; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}