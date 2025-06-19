agenda = {}

def incluirNovoNome(nome, telefones):
    agenda[nome] = telefones
    print(f"{nome} incluído(a) com os telefones: {telefones}")

def incluirTelefone(nome, telefone):
    if nome in agenda:
        agenda[nome].append(telefone)
        print(f"Telefone {telefone} adicionado para {nome}")
    else:
        resp = input(f"{nome} não está na agenda. Deseja incluí-lo(a)? (s/n): ").lower()
        if resp == 's':
            incluirNovoNome(nome, [telefone])

def excluirTelefone(nome, telefone):
    if nome in agenda:
        if telefone in agenda[nome]:
            agenda[nome].remove(telefone)
            print(f"Telefone {telefone} removido de {nome}")
            if not agenda[nome]:
                del agenda[nome]
                print(f"{nome} removido(a) da agenda.")
    else:
        print(f"{nome} não está na agenda.")

def excluirNome(nome):
    if nome in agenda:
        del agenda[nome]
        print(f"{nome} removido(a) da agenda.")
    else:
        print(f"{nome} não está na agenda.")

def consultarTelefone(nome):
    if nome in agenda:
        print(f"Telefones de {nome}: {agenda[nome]}")
    else:
        print(f"{nome} não está na agenda.")

def menu():
    while True:
        print("\nMenu:")
        print("1 - Incluir novo nome")
        print("2 - Incluir telefone")
        print("3 - Excluir telefone")
        print("4 - Excluir nome")
        print("5 - Consultar telefone")

        opcao = int(input("Escolha uma opção: "))

        if opcao < 0:
            print("Encerrando programa.")
            break
        elif opcao == 1:
            nome = input("Nome: ")
            telefones = input("Telefones: ").split()
            incluirNovoNome(nome, telefones)
        elif opcao == 2:
            nome = input("Nome: ")
            telefone = input("Telefone: ")
            incluirTelefone(nome, telefone)
        elif opcao == 3:
            nome = input("Nome: ")
            telefone = input("Telefone para remover: ")
            excluirTelefone(nome, telefone)
        elif opcao == 4:
            nome = input("Nome para remover: ")
            excluirNome(nome)
        elif opcao == 5:
            nome = input("Nome para consultar: ")
            consultarTelefone(nome)
        else:
            print("Opção inválida.")

menu()
