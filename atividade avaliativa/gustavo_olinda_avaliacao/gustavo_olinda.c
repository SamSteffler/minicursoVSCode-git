#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Erro: Digite dois numeros. Ex: %s 10 5\n", argv[0]);
        return 1;
    }
    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);

    int maior, menor;
    if (n1 > n2) {
        maior = n1;
        menor = n2;
    } else {
        maior = n2;
        menor = n1;
    }
//aaaaaaaaaaaaaaaa
    printf("Soma: %d\n", n1 + n2);
    printf("Diferenca: %d\n", maior - menor);
    printf("Media: %.1f\n", (n1 + n2) / 2.0); 

    if (menor != 0) {
        printf("Resto da divisao: %d\n", maior % menor);
    } else {
        printf("Resto da divisao: Nao e possivel dividir por zero.\n");
    }

    return 0;
}