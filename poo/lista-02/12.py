corredores = {}
melhor_volta = float('inf')
melhor_corredor = ''
melhor_volta_n = 0

for i in range(5):
    nome = input(f'Nome do corredor {i+1}:')
    tempos = []
    for j in range(3):
        tempo = float(input(f"Tempo da volta {j+1}: "))
        tempos.append(tempo)
        if tempo < melhor_volta:
            melhor_volta = tempo
            melhor_corredor = nome
            melhor_volta_n = j + 1
    corredores[nome] = tempos

campeao = ''
menor_media = float('inf')
for nome, tempos in corredores.items():
    media = sum(tempos) / 3
    if media < menor_media:
        menor_media = media
        campeao = nome

print(f"\nMelhor volta: {melhor_corredor}, volta {melhor_volta_n}, tempo {melhor_volta:.2f} segundos.")
print(f"Campeão: {campeao}, média de {menor_media:.2f} segundos.")
