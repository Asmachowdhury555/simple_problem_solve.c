#include <stdio.h>

int main() {
    int num, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    printf("Square of %d = %d\n", num, square);

    return 0;
}
