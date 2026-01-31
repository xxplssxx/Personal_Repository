class Veiculo:
    def __init__(self, marca, rodas):
        self.marca = marca
        self.rodas = rodas
    def mover(self):
        print("Movendo...")
class Carro(Veiculo):
    def __init__(self, marca, portas, rodas):
        super().__init__(marca, rodas)
        self.portas = portas
    def mover(self):
        print("Acelerando carro...")
    def __str__(self):
        return f"A marca é um {self.marca} ele tem {self.rodas} rodas e {self.portas} portas."
c = Carro("Fiat", 4, 4); c.mover()
print(c)
#Estudo de herança
