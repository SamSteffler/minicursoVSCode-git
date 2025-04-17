#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <numero1> <numero2>\n", argv[0]);
        return 1;
    }

    // Convertendo argumentos para inteiros
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Calculando soma
    int soma = num1 + num2;

    // Determinando maior e menor
    int maior = (num1 > num2) ? num1 : num2;
    int menor = (num1 < num2) ? num1 : num2;

    // Calculando diferença, média e resto
    int diferenca = maior - menor;
    float media = (num1 + num2) / 2.0;
    int resto = maior % menor;

    // Exibindo resultados
    printf("Soma: %d\n", soma);
    printf("Diferença (maior - menor): %d\n", diferenca);
    printf("Média: %.2f\n", media);
    printf("Resto da divisão (maior %% menor): %d\n", resto);

    return 0;
}
