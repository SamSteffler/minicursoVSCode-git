#include <stdio.h>

void impnum (int n1,int n2)
{
    //soma
    printf("soma: %d\n", n1+n2);
    
    //diferença entre o maior e o menor
    if (n1>n2) {
        printf("diferença: %d\n", n1-n2);
    }
    else {
        printf("diferença: %d\n", n2-n1);
    }

    //média
    printf("média: %.2f\n", (n1+n2)/(float)2);

    //resto da divisão entre o maior e o menor
    if (n1>n2) {
        if (n2!=0) {
            printf("resto da divisão: %d\n", n1%n2);
        }
        else {
            printf("não é possível dividir por 0\n");
        }
    }
    else
    {
        if (n1!=0) {
            printf("resto da divisão: %d\n", n2%n1);
        }
        else {
            printf("não é possível dividir por 0\n");
        }
    }
}

int main()
{
    int a, b;

    printf("digite dois numeros: ");
    scanf("%d %d", &a, &b);

    impnum (a,b);
}