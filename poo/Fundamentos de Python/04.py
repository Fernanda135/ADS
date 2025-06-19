nome = input('Nome: ')
peso = float(input('Peso: '))
altura = float(input('Altura: '))

imc = peso / (altura ** 2)
print(f'IMC: {imc:.2f}')
