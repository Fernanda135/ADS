produtos = {
    "Maçã": 2.50,
    "Banana": 1.75,
    "Laranja": 3.00,
    "Manga": 4.25
}

print("Produtos disponíveis:")
for produto, preco in produtos.items():
    print(f"- {produto}: R$ {preco:.2f}")

atualizar = input("Digite o nome do produto que deseja atualizar o preço: ")

if atualizar in produtos:
    novo_preco = float(input("Digite o novo preço para o produto: "))
    produtos[atualizar] = novo_preco
    print("Preço atualizado com sucesso!")
else:
    print("Produto não encontrado no dicionário.")

print("\nDicionário de produtos atualizado:")
for produto, preco in produtos.items():
    print(f"- {produto}: R$ {preco:.2f}")

