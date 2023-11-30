""" Escreva uma função que receba dois números positivos por parãmetro e retorne a soma dos N números
inteiros existentes entre eles.
"""

def somaInt(num1, num2):
    for numero in range(num1, num2 + 1, 1):
        if numero == num1: 
            soma = numero
        else: 
            soma += numero
            print(f' somando {numero} fica {soma}')

    return(soma)

n1 = int(input("Digite o primeiro número: "))
n2 = int(input("Digite o segundo número: 5"))
print(f' A soma dos números inteiros entre {n1} e {n2} = {somaInt(n1, n2)}')