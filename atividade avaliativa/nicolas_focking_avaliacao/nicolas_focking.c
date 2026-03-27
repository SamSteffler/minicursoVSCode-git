#include <stdio.h>

int main() {

    int valor1, valor2, soma, diferenca, media, resto;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    if (valor2 > valor1)
    {
        valor1 = valor1 + valor2; 
        valor2 = valor1 - valor2; 
        valor1 = valor1 - valor2; 
    }
    
    soma = valor1 + valor2;
    diferenca = valor1 - valor2;
    media = soma / 2;
    resto = valor1 % valor2;

    printf("\nSoma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Média: %d\n", media);
    printf("Resto: %d\n", resto);

}