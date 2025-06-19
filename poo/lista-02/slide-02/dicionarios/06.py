lista = [12, -2, 4, 8, 29, 45, 78, 36, -17, 2, 12, 8, 3, 3, -52]

maior = max(lista)
print("Maior elemento:", maior)

menor = min(lista)
print("Menor elemento:", menor)

par = [num for num in lista if num % 2 == 0]
print("Números pares:", par)

primeiro = lista[0]
ocorrencias = lista.count(primeiro)
print("Número de ocorrências do primeiro elemento:", ocorrencias)

media = sum(lista) / len(lista)
print("Média dos elementos:", media)

soma_negativos = sum(num for num in lista if num < 0)
print("Soma dos elementos negativos:", soma_negativos)
