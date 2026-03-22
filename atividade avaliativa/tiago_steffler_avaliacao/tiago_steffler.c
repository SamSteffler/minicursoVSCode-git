#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <numero1> <numero2>\n", argv[0]);
        return 1;
    }
    
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    
    int maior = (num1 > num2) ? num1 : num2;
    int menor = (num1 < num2) ? num1 : num2;
    
    int soma = num1 + num2;
    int subtracao = maior - menor;
    double media = (num1 + num2) / 2.0;
    int modulo = maior % menor;
    
    printf("Soma: %d\n", soma);
    printf("Subtracao (maior - menor): %d\n", subtracao);
    printf("Media: %.1f\n", media);
    printf("Modulo (maior %% menor): %d\n", modulo);
    
    return 0;
}