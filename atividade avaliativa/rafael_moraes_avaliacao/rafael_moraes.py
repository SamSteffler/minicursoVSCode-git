import sys

num1 = int(sys.argv[1])
num2 = int(sys.argv[2])

print("Soma:", num1 + num2)
print("Diferença entre o maior e o menor:", max(num1, num2) - min(num1, num2))
print("Média:", (num1 + num2) / 2)
print("Resto da divisão entre o maior e o menor:", max(num1, num2) % min(num1, num2))
