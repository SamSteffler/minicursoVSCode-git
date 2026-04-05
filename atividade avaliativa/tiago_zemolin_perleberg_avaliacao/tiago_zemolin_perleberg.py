n1 = int(input('Digite um valor: '))
n2 = int(input('Digite outro valor: '))

maior = max(n1, n2)
menor = min(n1, n2)

print(f'{n1} + {n2} = {n1 + n2}')
print(f'{maior} - {menor} = {maior - menor}')
print(f'Média: {(n1 + n2) / 2}')
print(f'Resto da divisão {maior} % {menor} = {maior % menor}')