senha_correta = "12345"

senha_digitada = input("Digite a sua senha: ")

if senha_digitada != senha_correta:
    print("Senha incorreta! Acesso negado.")
else:
    print("Senha correta! Acesso permitido.")
