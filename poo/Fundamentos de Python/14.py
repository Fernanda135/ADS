nome = "Ana"
quantidade = 5

mensagem = f"Olá, {nome}! Você tem {quantidade} novas mensagens."
print(mensagem)

mensagem = "Olá, %s! Você tem %d novas mensagens." % (nome, quantidade)
print(mensagem)