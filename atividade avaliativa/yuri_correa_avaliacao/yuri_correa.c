#include <stdio.h>
// Yuri Correa de Barros Guimarães
void num(int a, int b) {

    int soma = a + b;
    printf("A soma dos números é: %d\n", soma);

    int diferença;
    if (a > b) {
        diferença = a - b;
    } else {
        diferença = b - a;
    }
    printf("A diferença entre os números é: %d\n", diferença);

    int média = soma / 2;
    printf("A média dos números é: %d\n", média);

    int rdiv;
    if (a > b && b != 0) {
        rdiv = a / b;
    } else if (b > a && a != 0) {
        rdiv = b / a;
    } else if (a == b) {
        rdiv = 1;
    } else {
        printf("Não é possível dividir por zero.\n");
        return;
    }
    printf("A divisão do maior pelo menor é: %d\n", rdiv);

}
int main() {
    int a;
    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    int b;
    printf("Digite outro número inteiro: ");
    scanf("%d", &b);

    num(a, b);

}