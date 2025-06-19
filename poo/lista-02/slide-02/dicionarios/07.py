import random

def lancamentos(qtd_lancamentos=100):
    resultados = []
    contadores = [0] * 6

    for i in range(qtd_lancamentos):
        resultado = random.randint(1, 6)
        resultados.append(resultado)
        contadores[resultado - 1] += 1

    return resultados, contadores

resultados, contadores = lancamentos()

print("Resultados dos lançamentos:")
for i in range(6):
    print(f"Valor {i + 1}: {contadores[i]} vezes")
