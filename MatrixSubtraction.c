#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns for matrices: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols], B[rows][cols], C[rows][cols];

    // Input matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix subtraction
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    // Print the result matrix
    printf("Result of Matrix Subtraction (A - B):\n"
