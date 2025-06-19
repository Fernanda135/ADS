def exibir_lista(lista):
    for i in lista:
        if isinstance(i, list):
            exibir_lista(i)
        else:
            print(i)

l1 = [1, "a", 2.5, True]
print("Lista 1:")
exibir_lista(l1)

l2 = [0, [1, 2], 3]
print("\nLista 2:")
exibir_lista(l2)

l3 = [0, 1, [2, [3, 4]], 5]
print("\nLista 3:")
exibir_lista(l3)