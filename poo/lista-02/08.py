import random

gabarito = [random.randint(1, 3) for x in range(13)]
print("Gabarito oficial:", gabarito)
print()

cartoes = []
for i in range(1, 4):
    respostas = [random.randint(1, 3) for x in range(13)]
    cartao = {
        'numero': i,
        'respostas': respostas
    }
    cartoes.append(cartao)

for cartao in cartoes:
    acertos = 0
    for i in range(13):
        if cartao['respostas'][i] == gabarito[i]:
            acertos += 1

    print(f"Apostador {cartao['numero']} -> Acertos: {acertos}")
    if acertos == 13:
        print("Ganhador!")
    print("Respostas:", cartao['respostas'])
    print()
