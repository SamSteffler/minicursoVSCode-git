// Esse programa deverá ser em C, Python ou Java e receberá dois valores como argumentos, imprimindo:
// - a soma
// - a diferença entre o maior e o menor
// - a média
// - e o resto da divisão entre o maior e o menor.
#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);

    int soma = n1 + n2;

    int diferenca;
    if (n1 > n2)
    {
        diferenca = n1 - n2;
    }
    else
    {
        diferenca = n2 - n1;
    }

    int media = (n1 + n2) / 2;

    int resto;
    if (n1 > n2)
    {
        resto = n1 % n2;
    }
    else
    {
        resto = n2 % n1;
    }

    printf("Soma: %d\n", soma);
    printf("Diferenca: %d\n", diferenca);
    printf("Media: %d\n", media);
    printf("Resto: %d\n", resto);

    return 0;
}