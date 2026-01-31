class Forma:
    def area(self, area):
        return area
class Circulo:
    
    def area(self, raio):
        pi = 3.14
        return 2*pi*raio
class Retangulo:
    def area(self, comprimento):
        altura = int(input())
        return comprimento * altura

for i in (Circulo(), Retangulo()):
    print(i.area(5))
         