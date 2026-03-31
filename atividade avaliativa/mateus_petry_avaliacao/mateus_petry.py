valor1 = float(input("Digite um valor: "))
valor2 = float(input("Digite outro valor: "))

maior = max(valor1, valor2)
menor = min(valor1, valor2)

print()
print(f"{'Soma:':<45} {valor1 + valor2:>10.2f}")
print(f"{'Diferença (maior - menor):':<45} {maior - menor:>10.2f}")
print(f"{'Média:':<45} {(valor1 + valor2) / 2:>10.2f}")
print(f"{'Resto da divisão (maior % menor):':<45} {maior % menor:>10.2f}")