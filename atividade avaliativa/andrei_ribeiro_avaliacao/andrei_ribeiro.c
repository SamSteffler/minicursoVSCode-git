#include <stdio.h>
int main(){
    int x, y, soma, diferenca, resto;
    float media;
    printf("digite valores para x e y: ");
    scanf("%d %d", &x, &y);

    soma = x + y;
    printf("soma: %d\n", soma);

    if(x > y){
        diferenca = x - y;
        printf("diferenca entre o maior e menor: %d\n", diferenca);
    }
    else if(x < y){
        diferenca = y - x;
        printf("diferenca entre o maior e menor: %d\n", diferenca);
    }
    else{
        diferenca = x - y;
        printf("diferenca entre o maior e menor: %d\n", diferenca);
    }

    media = (x + y)/2;
    printf("media: %.2f\n", media);

    if(x > y){
        resto = x % y;
        printf("resto da divisao entre o maior e menor: %d\n", resto);
    }
    else if(x < y){
        resto = y % x;
        printf("resto da divisao entre o maior e menor: %d\n", resto);
    }
    else{
        resto = x % y;
        printf("resto da divisao entre o maior e menor: %d\n", resto);
    }
}
