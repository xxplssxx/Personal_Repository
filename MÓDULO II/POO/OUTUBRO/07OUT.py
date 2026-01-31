def RegistrarCassacos():
    cassacos = []
    resposta = 1
    while resposta==1:
        resposta = int(input("Você quer inserir outro aluno? 1 para sim 0 para não."))
        animal = input("Digite o nome do seu animal:")
        cassacos.append(animal)
        for i in cassacos:
            print(cassacos)
RegistrarCassacos()
def AreaTriângulo(base,altura):
    return (base*altura)/2
