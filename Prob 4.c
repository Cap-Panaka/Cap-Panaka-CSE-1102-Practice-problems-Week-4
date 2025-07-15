//Write a C program that will print the sum of the following series.  1+3+...+(2n+1)
#include <stdio.h>

int main() {
    int i, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= (2 * n + 1); i += 2) {
        if (i > 1) {
            printf(" + ");
        }
        printf("%d", i);
        sum += i;
    }
    printf(" = %d\n", sum);

    return 0;
}