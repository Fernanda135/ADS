dicionario = {
    "sol": "sun",
    "lua": "moon",
    "água": "water",
    "terra": "earth",
    "flor": "flower",
    "pão": "bread",
    "carro": "car",
    "casa": "house",
    "livro": "book",
    "amor": "love"
}

ingles = input("Digite uma palavra em inglês: ")

if ingles in dicionario:
    traducao = dicionario[ingles]
    print(f"A tradução de {ingles} é '{traducao}'.")
else:
    print(f"A palavra {ingles} não foi encontrada no dicionário.")
