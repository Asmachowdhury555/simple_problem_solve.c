#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("How many numbers you want to enter? ");
    scanf("%d", &n);

    float numbers[n];  // Array to store the numbers

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
        sum += numbers[i];   // sum
    }

    average = sum / n;  //Averge

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
