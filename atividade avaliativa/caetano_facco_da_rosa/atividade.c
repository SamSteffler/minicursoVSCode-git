#include <stdio.h>
#include <math.h>

float soma(float n1, float n2) {
    return n1 + n2;
}

float diferenca(float n1, float n2) {
    if (n1 > n2) {
        return n1 - n2;
    } else {
        return n2 - n1;
    }
}

float media(float n1, float n2) {
    return (n1 + n2) / 2;
}

float resto(float n1, float n2) {
    if (n1 > n2) {
        return fmod(n1, n2);
    } else {
        return fmod(n2, n1);
    }
}

int main() {
    float n1, n2;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Soma: %f\n", soma(n1, n2));
    printf("Diferenca: %f\n", diferenca(n1, n2));
    printf("Media: %f\n", media(n1, n2));
    printf("Resto: %f\n", resto(n1, n2));

    return 0;
}