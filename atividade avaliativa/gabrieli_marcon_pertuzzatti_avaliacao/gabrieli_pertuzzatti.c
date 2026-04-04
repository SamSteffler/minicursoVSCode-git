//a soma
//a diferença entre o maior e o menor
//a média
//e o resto da divisão entre o maior e o menor
#include <stdio.h>

int main(){
int a, b, soma, dif, resto;
float media;

printf("Informe dois valores: ");
scanf("%d %d", &a, &b);

soma = a + b;
printf("A soma é igual a: %d\n", soma);

if(a > b){
    dif = a - b;
    printf("A diferença entre o maior e o menor valor é igual a: %d\n", dif);
}
    else{
        dif = b - a;
        printf("A diferença entre o maior e o menor valor é igual a: %d\n", dif);
    }

media = (a + b)/2.0;
printf("A média é igual a: %.2f\n", media);

if(a > b){
    if(b > 0){
    resto = a % b;
    printf("O resto da divisão entre o maior e o menor valor é igual a: %d\n", resto);
}
    else{
        printf("Não é possível realizar a divisão por zero\n");
    }
}
    else{
        if(a > 0){
        resto = b % a;
        printf("O resto da divisão entre o maior e o menor valor é igual a: %d\n", resto);
    }
        else{
             printf("Não é possível realizar a divisão por zero\n");
        }
    }
    return 0;
}