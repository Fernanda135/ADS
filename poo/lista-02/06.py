def inverter():
  lista = [0, 1, 2, 3, 4, 5, 6, 7,8 ,9]

  print("Lista original:", lista)

  for i in range(5):
    temp = lista[i]
    lista[i] = lista[9 - i]
    lista[9 - i] = temp

  print("Lista invertida:", lista)


inverter()
