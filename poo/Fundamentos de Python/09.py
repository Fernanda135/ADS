opcao = ''

while opcao != '0':
    print('1 - Cadastrar nome e idade')
    print('2 - Calcular IMC')
    print('0 - Sair')
    opcao = input('Escolha uma opção: ')
    
    if opcao == '1':
        nome = input('Digite seu nome: ')
        idade = int(input('Digite sua idade: '))
        print(f'Nome: {nome}, Idade: {idade}')
    elif opcao == '2':
        peso = float(input('Digite seu peso (kg): '))
        altura = float(input('Digite sua altura (m): '))
        imc = peso / (altura ** 2)
        print(f'Seu IMC é: {imc:.2f}')
    elif opcao == '0':
        print('Saindo...')
    else:
        print('Opção inválida. Tente novamente.')