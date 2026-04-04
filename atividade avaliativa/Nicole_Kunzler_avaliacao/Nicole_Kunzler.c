#include <stdio.h>

int main() {
    
    int num_maior, num_menor, soma, diferença, media, resto_divisão;
    
    printf ("Digite o primeiro numero:");
    scanf ("%d",&num_maior);
    
    printf ("Digite o segundo numero:");
    scanf ("%d", &num_menor);
    
    soma = num_maior + num_menor; 
    diferença = num_maior - num_menor;
    media = num_maior + num_menor/ 2;
    resto_divisão = num_maior % num_menor;
    
    
    printf ("A soma de %d e %d é: %d\n", num_maior, num_menor, soma);
    printf ("A diferença de %d e %d é: %d\n", num_maior, num_menor,diferença);
    printf (" A media entre %d e %d é: %d\n", num_maior, num_menor, media);
    printf ("O resto da divisão entre %d e %d é: %d\n", num_maior, num_menor,resto_divisão);
}