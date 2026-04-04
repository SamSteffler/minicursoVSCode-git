#include <stdio.h>

int main(){
    int x,y, dif, soma, media, resto;
    scanf("%d %d", &x, &y);
    dif = (x>y) ? x-y : y-x;
    resto = (x>y) ? x%y : y%x;
    soma = x+y;
    media = soma/2;
    printf("Diferença: %d\n", dif);
    printf("Soma: %d\n", soma);
    printf("Média: %d\n", media);
    printf("Resto: %d\n", resto);
    return 0;
}