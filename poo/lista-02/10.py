lista = []

for i in range(1, 101):
    lista.append(i)

media = sum(lista) / len(lista)

lista.sort()
n = len(lista)
meio = n // 2
if n % 2 == 0:
    mediana = (lista[meio - 1] + lista[meio]) / 2
else:
    mediana = lista[meio]

variancia = sum((x - media) ** 2 for x in lista) / len(lista)

des_padrao = variancia ** 0.5

print(f"Média: {media}")
print(f"Mediana: {mediana}")
print(f"Variância: {variancia}")
print(f"Desvio Padrão: {des_padrao}")