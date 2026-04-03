import sys

if len(sys.argv) != 3:
    sys.exit(1)

a = float(sys.argv[1])
b = float(sys.argv[2])

maior = max(a, b)
menor = min(a, b)

soma = a + b
diferenca = maior - menor
media = (a + b) / 2

if menor != 0:
    resto = maior % menor
else:
    resto = "Indefinido (divisão por zero)"

# Saída
print(f"Soma: {soma}")
print(f"Diferença: {diferenca}")
print(f"Média: {media}")
print(f"Resto da divisão: {resto}")