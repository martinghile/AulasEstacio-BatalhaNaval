#include <stdio.h>

int main()
{
    int tabuleiro[10][10] = {0}; // inicia tudo com 0

    int linha = 2;
    int coluna = 3;

    // 🚢 colocar navio (horizontal)
    if (tabuleiro[linha][coluna] != 0 ||
        tabuleiro[linha][coluna + 1] != 0 ||
        tabuleiro[linha][coluna + 2] != 0)
    {
        printf("Entrada inválida");
    }
    else
    {
        for (int k = 0; k < 3; k++)
        {
            tabuleiro[linha][coluna + k] = 3;
        }
    }

    int linha2 = 4;
    int coluna2 = 2;

    if (tabuleiro[linha2][coluna2] != 0 ||
        tabuleiro[linha2 + 1][coluna2] != 0 ||
        tabuleiro[linha2 + 2][coluna2] != 0)
    {
        printf("Entrada Inválida");
    }
    else
    {
        // 🚢 colocar navio (vertical)
        for (int k = 0; k < 3; k++)
        {
            tabuleiro[linha2 + k][coluna2] = 3;
        }
    }
    // 🔤 letras das colunas
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // cabeçalho
    printf("   ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c  ", colunas[i]);
    }
    printf("\n");

    // imprimir tabuleiro
    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", i);
        for (int j = 0; j < 10; j++)
        {
            printf("%d  ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}