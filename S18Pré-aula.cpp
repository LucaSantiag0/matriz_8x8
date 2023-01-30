#include <stdio.h>
#include <math.h>
#include <locale.h>

// so mudar os numeros
#define lin 8
#define col 8

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int mat[lin][col], i, j;
    bool simetrica;

    // preenchendo uma MATRIZ
    for (i = 0; i < lin; i++)
    {

        for (j = 0; j < col; j++)
        {
            printf("\n**Linha %i Coluna %i **\n", i + 1, j + 1);
            printf("Digite um valor: ");
            scanf("%i", &mat[i][j]);
        }
    }

    simetrica = true;
    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (mat[i][j] != mat[j][i])
            {
                simetrica = false;
            }
        }
    }

    if (simetrica)
    {
        printf("A matriz informada é simetrica!");
    }
    else
    {
        printf("A matriz informada não é simetrica!");
    }
}
