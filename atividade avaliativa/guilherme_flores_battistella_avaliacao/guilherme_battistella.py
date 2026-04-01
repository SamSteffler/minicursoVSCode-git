
def somaF(v1, v2):
    soma = v1 + v2
    return soma

def diferencaF(v1, v2):
    maior = max(v1, v2)
    menor = min(v1, v2)

    diferenca = maior - menor
    
    return diferenca

def mediaF(v1, v2):
    media = (v1+v2)/2

    return media

def restDivF(v1, v2):
    maior = max(v1, v2)
    menor = min(v1, v2)

    resto = maior % menor

    return resto


def funcaoCalcular():
    valor1 = int(input("Digite o primeiro Valor:\n"))
    valor2 = int(input("Digite o segundo Valor:\n"))

    soma = somaF(valor1, valor2)
    print('Soma = ', soma)

    diferenca = diferencaF(valor1, valor2)
    print('Diferença = ', diferenca)

    media = mediaF(valor1, valor2)
    print('Média = ', media)

    restDiv = restDivF(valor1, valor2)
    print('Resto da Divisão =', restDiv)

funcaoCalcular()
