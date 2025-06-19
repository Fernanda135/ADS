def agendar():

    agenda = []

    for i in range(10):
        print(f"Dados da pessoa {i + 1}")
        nome = input("Nome: ")
        endereco = input("Endereço: ")
        cep = input("CEP: ")
        bairro = input("Bairro: ")
        telefone = input("Telefone: ")

        pessoa = [nome, endereco, cep, bairro, telefone]

        agenda.append(pessoa)

    print("\nAgenda:")
    for i in range(9, -1, -1):
        print(f"Pessoa {i + 1}:")
        print(f"  Nome: {agenda[i][0]}")
        print(f"  Endereço: {agenda[i][1]}")
        print(f"  CEP: {agenda[i][2]}")
        print(f"  Bairro: {agenda[i][3]}")
        print(f"  Telefone: {agenda[i][4]}")
        print("-" * 20)

agendar()
