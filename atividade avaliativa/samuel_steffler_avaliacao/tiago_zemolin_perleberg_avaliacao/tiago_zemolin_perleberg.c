#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int soma = a + b;

    int maior, menor;
    if (a > b) {
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }

    int diferenca = maior - menor;
    float media = (a + b) / 2.0;
    int resto = maior % menor;

    printf("Soma: %d\n", soma);
    printf("Diferenca: %d\n", diferenca);
    printf("Media: %.2f\n", media);
    printf("Resto: %d\n", resto);

    return 0;
}