pessoas = {
    "Ana": 17,
    "Vitor": 20,
    "Carlos": 19,
    "Davi": 16,
    "Eva": 22
}

maior_idade = {}
for nome, idade in pessoas.items():
    if idade > 18:
        maior_idade[nome] = idade

print("Pessoas maiores de 18 anos:")
for nome, idade in maior_idade.items():
    print(f"- {nome}: {idade} anos")
