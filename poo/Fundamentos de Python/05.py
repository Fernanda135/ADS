nome = input('Nome: ')
peso = float(input('Peso: '))
altura = float(input('Altura: '))

imc = peso / (altura ** 2)
print(f'IMC: {imc:.2f}')

if imc < 18.5:
    print('Abaixo do peso')
elif imc < 25:
    print('Peso normal')
elif imc < 30:
    print('Sobrepeso')
elif imc < 35:
    print('Obesidade grau 1')
elif imc < 40:
    print('Obesidade grau 2')
else:   
    print('Obesidade grau 3')