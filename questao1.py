""" 1. Implemente uma funcao que receba como parametro um vetor de numeros inteiros (vet) de tamanho
n e inverta a ordem dos elementos armazenados nesse vetor."""

vetor = []

while True:
    try: 
        numeroDigitado = int(input('Digite o número que deseja adicionar na lista: '))
        vetor.append(numeroDigitado)
    except(ValueError, TypeError):
        print("O valor utilizado não é um número inteiro")
    else:
        op = ''
        while True:
            try: 
                op = str(input('Deseja cadastrar mais um número no vetor?  [Sim/Não]')).upper().strip()
            except(ValueError, TypeError):
                print('Digite Sim ou Não')
            else: 
                if op == 'SIM' or op == 'NAO' or op == 'NÃO': break
                else: 
                    print('Digite Sim ou Não') 
                    continue
        if op in 'NAONÃO': break
print(vetor[::-1])