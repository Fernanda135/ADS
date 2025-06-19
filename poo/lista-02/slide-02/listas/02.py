notas = []
nota = 0
media = 0

while nota >= 0:
    nota = float(input('Insira a uma nota de valor positivo:'))
    if nota >= 0:
        notas.append(nota)

for n in notas:
    media += n

media = media / len(notas)

print(f'A média das notas {notas} é igual a: {media:.2f}')
