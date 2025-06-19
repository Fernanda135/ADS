qtd = 0
lista = [2, 5, 8, 22, 1111, 9, 10, 34, 22, 9, 0, 1, 22]
n = int(input('insira um elemento para buscar:'))

for i in lista:
    if n == i:
        qtd += 1

if qtd > 0:
    print(f'O elemento {n} aparece {qtd} vezes na lista.')
else:
    print(f'O elemento {n} não aparece na lista')