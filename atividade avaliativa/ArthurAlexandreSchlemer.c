#include <stdio.h>

int main() {
  float num1, num2, soma, diferenca, media, resto;

  // Entrada dos valores
  printf("Digite o primeiro valor: ");
  scanf("%f", &num1);
  printf("Digite o segundo valor: ");
  scanf("%f", &num2);

  // Cálculos
  soma = num1 + num2;
  if (num1 > num2) {
    diferenca = num1 - num2;
    resto = (int)num1 % (int)num2;
  } else {
    diferenca = num2 - num1;
    resto = (int)num2 % (int)num1;
  }
  media = soma / 2;

  // Saída dos resultados
  printf("Soma: %.2f\n", soma);
  printf("Diferença entre o maior e o menor: %.2f\n", diferenca);
  printf("Média: %.2f\n", media);
  printf("Resto da divisão entre o maior e o menor: %.2f\n", resto);

  return 0;
}