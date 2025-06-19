from random import randint

mini = int(input('valor minimo:'))
maxi = int(input('valor maximo:'))
quant = int(input('quantidade a ser sorteada:'))
nums = []

for i in range(quant):
    x = randint(mini, maxi)
    if x in nums:
        pass
    else:
        print(x)
    nums.append(x)



