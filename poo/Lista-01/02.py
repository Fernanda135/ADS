def fatorial_rec(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * fatorial_rec(n - 1)
    
def fatorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        res = 1
        for i in range(2, n + 1):
            res *= i
        return res
    
    
numero = int(input('Digite um número inteiro: '))

print(f'O fatorial de {numero} é {fatorial(numero)}')
print(f'O fatorial de {numero} (recursivo) é: {fatorial_rec(numero)}')