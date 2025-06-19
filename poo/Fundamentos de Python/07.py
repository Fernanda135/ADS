frase = input("Escreva uma frase: ")
palavra = input("Escreva uma palavra: ")

palavra = f'{palavra} está na frase' if palavra in frase else f'{palavra} não está na frase'
print(palavra)