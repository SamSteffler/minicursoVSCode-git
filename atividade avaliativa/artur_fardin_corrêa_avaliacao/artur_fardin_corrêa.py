import sys

num1 = int(input("Escolha o primeiro número: "))
num2 = int(input("Escolha o segundo número: "))

maior = max(num1, num2)
menor = min(num1,num2)
    
soma = num1 + num2
diferenca = maior - menor
media = (num1 + num2) / 2
resto = maior % menor

print("soma: ", soma)
print("diferenca: ", diferenca)
print("media: ", media)
print("resto: ", resto)


