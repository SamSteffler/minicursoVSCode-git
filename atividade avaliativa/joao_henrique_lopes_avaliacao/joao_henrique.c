 /* Dentro dessa pasta, você deverá criar um programa em C ou Python que recebe dois valores e que imprima:
a soma
a diferença entre o maior e o menor
a média
e o resto da divisão entre o maior e o menor.

Esses dois números de entrada devem ser argumentos de linha de comando, por exemplo:

.\main.exe 435 67
*/

// Nome : João Henrique Lopes
// Matricula : 202511184
// Email : Joaohenriquelopes080@gmail.com

#include<stdio.h>
int main(){
    int a, b;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);
     
     // Soma
    printf("A soma é: %d\n", a + b);

    // diferença

    if(a <  b) {
        printf("A diferença entre o maior e o menor é: %d\n", b - a);
    } else {
        printf("A diferença entre o maior e o menor é : %d\n", a - b);
    }
    // media
    printf("a media é : %d\n", (a + b) / 2);

    // resto da divisão
    printf("O Resto da divisão é : %d\n", a % b);
    
    return 0;
}