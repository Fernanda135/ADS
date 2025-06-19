def ordenar():

    nums = []
    while True:
        num_str = input("Insira um número inteiro positivo:")

        num = int(num_str)

        if num < 0:
            break

        if num == 0:
            meio = len(nums) // 2
            nums.insert(meio, num)
        elif num % 2 == 0:
            nums.insert(0, num)
        else:
            nums.append(num)

    print("Lista:", nums)
    nums.sort()
    print("Lista ordenada:", nums)

ordenar()