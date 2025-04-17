#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <numero1> <numero2>\n", argv[0]);
        return 1;
    }

    // Convertendo os argumentos para inteiros
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Calculando a soma
    int soma = num1 + num2;

    // Determinando o maior e o menor
    int maior = (num1 > num2) ? num1 : num2;
    int menor = (num1 < num2) ? num1 : num2;

    // Calculando a diferença entre o maior e o menor
    int diferenca = maior - menor;

    // Calculando a média
    float media = (num1 + num2) / 2.0;

    // Calculando o resto da divisão entre o maior e o menor
    int resto = maior % menor;

    // Imprimindo os resultados
    printf("Soma: %d\n", soma);
    printf("Diferença entre o maior e o menor: %d\n", diferenca);
    printf("Média: %.2f\n", media);
    printf("Resto da divisão entre o maior e o menor: %d\n", resto);

    return 0;
}