class Conta:
    def __init__(self, saldo):
        self.__saldo = saldo
    @property
    def saldo(self):
        return self.__saldo
    @saldo.setter
    def saldo(self, saldo):
        self.__saldo = saldo
    
class ContaCorrente(Conta):
    def __init__(self, saldo, limite):
        super().__init__(saldo)
        self.__limite = limite
    @property
    def limite(self):
        return self.__limite
    @limite.setter
    def limite(self, limite):
        self.__limite = limite

class Veiculo:
    def __init__(self, marca, modelo):
        self.__marca = marca
        self.__modelo = modelo
    @property
    def marca(self):
        return self.__marca
    @marca.setter
    def marca(self, marca):
        self.__marca = marca
    @property
    def modelo(self):
        return self.__modelo
    @modelo.setter
    def modelo(self, modelo):
        self.__modelo = modelo
    
class Carro(Veiculo):
    def __init__(self, marca, modelo, portas):
        super().__init__(marca, modelo)
        self.__portas = portas
    @property
    def portas(self):
        return self.__portas
    @portas.setter
    def portas(self, portas):
        self.__portas = portas
    
CC1=ContaCorrente("fiat", "Uno" ,2)

print(CC1.saldo, CC1.limite)
CC1.saldo = "renault"
CC1.limite = 4
print(CC1.saldo, CC1.limite)

    