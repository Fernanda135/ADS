def fatorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        res = 1
        for i in range(2, n + 1):
            res *= i
        return res


n1 = int(input('número 1:'))
n2 = int(input('número 2:'))

arranjo = fatorial(n1) / (fatorial(n1-n2))
combinacao = fatorial(n1) / ((fatorial(n2)*(fatorial(n1-n2))))

print(f'Arranjo de {n1} e {n2}: {arranjo}')
print(f'Combinação de {n1} e {n2}: {combinacao}')