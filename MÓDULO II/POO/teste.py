lista = [4, 5, 6]


a = int(input("Digite um elemento a ser adicionado na lista:"))
while type(a)==int:
    for i in lista:
        lista.append(a)
        lista.sort()
        print(f"Lista:{lista}")
        break
        
    a = int(input("Digite um elemento a ser adicionado na lista:"))
    
for i in lista:
    print("Lista:", i)
    # Adiciona um elemento ao final da lista
    lista.append(7)

    # Remove o primeiro elemento com valor 5
    if 5 in lista:
        lista.remove(5)

    # Insere o valor 10 na posição 1
    lista.insert(1, 10)

    # Remove e retorna o último elemento
    lista.pop()

    # Ordena a lista
    lista.sort()

    # Inverte a lista
    lista.reverse()

    print("Lista modificada:", lista)