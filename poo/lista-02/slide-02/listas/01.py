nums = []
n = ''

for i in range(5):
    n = int(input(f'Insira o {i+1} número:'))
    nums.append(n)


nums.sort()
print(f'Lista em ordem crescente: {nums}')
nums.reverse()
print(f'Lista em ordem decrescente: {nums}')