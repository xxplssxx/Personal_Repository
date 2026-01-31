class Player:
    def __init__(self,nome, altura, peso):
        self.nome=nome
        self.altura = altura
        self.peso = peso
        
    def calculoIMC(self):
        return self.peso/self.altura**2
Pedro = Cassaco("Pedrin",1.69,65)


print(f"O imc da pessoa {Pedro.nome} é de {Pedro.calculoIMC()}")