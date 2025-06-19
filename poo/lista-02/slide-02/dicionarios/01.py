capitais = {
    'Brasil': 'Brasilia',
    'Turquia': 'Ancara',
    'França': 'Paris',
    'China': 'Pequim',
    'Russia': 'Moscou'
}

pais = input('Insira o nome de um país:')
if pais in capitais:
    print(f'A capital de {pais} é: {capitais[pais]}')
else:
    print('País não encontrado no dicionário.')