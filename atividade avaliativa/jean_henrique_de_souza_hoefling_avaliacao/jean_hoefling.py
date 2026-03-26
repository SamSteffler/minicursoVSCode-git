##NOME COMPLETO: Jean Henrique de Souza Hoefling

num1 = int(input("Digite o primeiro número: "))
num2 = int(input("Digite o segundo número: "))

soma = num1+num2

if (num1 > num2):
    sub = num1 - num2
    resto = num1 % num2
else:
    sub = num2 - num1
    resto = num2 % num1

media = soma / 2

print(f"""O valor da soma é {soma},
Da diferença do maior pelo menor é {sub}, 
Do resto da divisão do maior pelo menor é {resto}
E da média é {media}""")
