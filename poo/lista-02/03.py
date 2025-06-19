def procurar(palavra, letra):
    n = 0
    for i in palavra:
        n += 1
        if i == letra:
            print(n-1)
        elif letra not in palavra:
            print('caractere não encontrado!')


p = input('digite uma palavra:')
l = input('digite uma letra:')
procurar(p, l)