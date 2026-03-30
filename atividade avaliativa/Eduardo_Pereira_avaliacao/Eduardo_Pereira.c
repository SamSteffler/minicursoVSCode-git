//Eduardo Jacques Pereira - matricula: 202511370

#include <stdio.h>

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    if(a > b) {
        return a - b;
    } else {
        return b - a;
    }
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b != 0) {
        if(a > b) {
            return a / b;
        } else {
            return b / a;
        }
    } else {
        printf("Erro: Divisao por zero nao e permitida.\n");
        return 0; 
    }
}

int main() {
    int operacao;
    float num1, num2;

    printf("Atividade avaliativa (Eduardo Jacques Pereira)\n");
    printf("--------------------------------------------\n");
    printf("Qual operacao deseja realizar?\n");
    printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    
    scanf("%d", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("\n");

    switch (operacao) {
        case 1:
            printf("Resultado: %.2f\n", soma(num1, num2));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtracao(num1, num2));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplicacao(num1, num2));
            break;
        case 4:
            // O erro de divisão por zero já é tratado dentro da função
            if (num2 != 0) {
                printf("Resultado: %.2f\n", divisao(num1, num2));
            } else {
                divisao(num1, num2); 
            }
            break;
        default:
            printf("Operacao invalida.\n");
    }

    return 0;
}