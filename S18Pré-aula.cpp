#include <stdio.h>
#include <stdbool.h> // Include for bool type
#include <locale.h>

#define ROWS 8
#define COLS 8

// Function to fill the matrix with user input
void fillMatrix(int mat[ROWS][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("\n**Linha %i Coluna %i **\n", i + 1, j + 1);
            printf("Digite um valor: ");
            scanf("%i", &mat[i][j]);
        }
    }
}

// Function to check if the matrix is symmetric
bool isSymmetric(int mat[ROWS][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (mat[i][j] != mat[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int mat[ROWS][COLS];
    bool symmetric;

    // Fill the matrix
    fillMatrix(mat);

    // Check if the matrix is symmetric
    symmetric = isSymmetric(mat);

    if (symmetric) {
        printf("A matriz informada é simétrica!\n");
    } else {
        printf("A matriz informada não é simétrica!\n");
    }

    return 0;
}
