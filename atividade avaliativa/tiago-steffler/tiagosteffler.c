#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    int a, b, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}