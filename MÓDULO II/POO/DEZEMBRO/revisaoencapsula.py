class Lampada:
    def __init__(self):
        self.__preco = 0.0
        self.__watts = 0
        self.__cor = ""
    @property
    def preco(self):
        return self.__preco
    @preco.setter
    def preco(self, valor):
        if valor>0:
            self.__preco = valor
        else:
            print("Valor inválido, tente novamente!")
    @property
    def watts(self):
        return self.__watts
    @watts.setter
    def watts(self, watts):
        if watts>0:
            self.__watts = watts
        else:
            print("Valor inválido, tente novamente!")
    @property
    def cor(self):
        return self.__cor
    @cor.setter
    def cor(self, cor):
            self.__cor = cor
    def __str__(self):
        return f"{self.__preco}, {self.__cor}, {self.__watts}"
class Prateleira:
    def __init__(self):
            self.__num = 0
            self.__lampra = []
    @property
    def num(self):
        return self.__num
    @num.setter
    def num(self, num):
        if num>0:
            self.__num = num
        else:
            print("Número inválido")
    @property
    def lampra(self):
        return self.__lampra
    @lampra.setter
    def lampra(self, lista):
        self.__lampra == lista
    def adcicionarlampras(self, lampada):
        self.__lampra.append(lampada)
    def listarlampras(self):
        for i in self.__lampra:
            print(f"{i.cor}, {i.preco}, {i.watts}")
                

lmp1 = Lampada()
lmp1.preco = 3.5
lmp1.cor = "azul"
lmp1.watts = 220
lmp2 = Lampada()
lmp2.preco = 4.5
lmp2.cor = "vermei"
lmp2.watts = 110
p1 = Prateleira()
p1.num = 1
p1.adcicionarlampras(lmp1)
p1.adcicionarlampras(lmp2)
p1.listarlampras()


