def primo(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

n1 = int(input('Número 1:'))
n2 = int(input('Número 2:'))

if n1 > n2:
    n1, n2 = n2, n1

primos = []
for num in range(n1, n2 + 1):
    if primo(num):
        primos.append(num)

if primos:
    print(f'Números primos no intervalo de {n1} e {n2}: {primos}')
else:
    print('Não existe nenhum número primo dentro desse intervalo.')