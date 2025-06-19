forma = input('Forma de um objeto(triangulo, quadrado ou circulo) ou sair:')

while forma.lower() != 'sair':
    if forma.lower() == 'triangulo':
        base = float(input('Base do triangulo: '))
        altura = float(input('Altura do triangulo: '))
        area = (base * altura) / 2
        print(f'A área do triangulo é {area:.2f}')
    elif forma.lower() == 'quadrado':
        lado = float(input('Lado do quadrado: '))
        area = lado ** 2
        print(f'A área do quadrado é {area:.2f}')
    elif forma.lower() == 'circulo':
        raio = float(input('Raio do circulo: '))
        area = 3.14 * (raio ** 2)
        print(f'A área do circulo é {area:.2f}')
    else:
        print('Forma inválida!')

    forma = input('Forma de um objeto(triangulo, quadrado ou circulo) ou sair:')