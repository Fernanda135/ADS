notas = {}

while True:
    nome = input("Digite o nome do aluno ou 'sair' para encerrar:")
    if nome.lower() == 'sair':
        break
    nota1 = float(input("Nota 1:"))
    nota2 = float(input("Nota 2:"))
    notas[nome] = [nota1, nota2]

def media_aluno(nome):
    if nome in notas:
        return sum(notas[nome]) / 2
    else:
        return None

while True:
    busca = input("Digite o nome do aluno para ver a média ou 'sair' para encerrar: ")
    if busca.lower() == 'sair':
        break
    media = media_aluno(busca)
    if media is not None:
        print(f"Média de {busca}: {media:.2f}")
    else:
        print("Aluno não encontrado.")
