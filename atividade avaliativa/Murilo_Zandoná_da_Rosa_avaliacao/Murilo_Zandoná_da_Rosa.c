#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite 2 numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    printf("soma: %d\n", n1+n2);
    (n1 > n2)?(printf("diferenca: %d\n", n1-n2)):(printf("diferenca: %d\n", n2-n1));
    printf("media: %d\n", (n1+n2)/2);
    (n1 > n2)?(printf("resto: %d\n", n1%n2)):(printf("resto: %d\n", n2%n1));

    return 0;
}