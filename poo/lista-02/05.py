from random import randint

num = randint(0, 100)
qtd = 1
palpite = 0

while qtd <= 10:
    palpite = int(input(f'digite o seu palpite {qtd}:'))
    if palpite == num:
        print(f'Você acertou! O número secreto era {num}!')
        break

    qtd += 1