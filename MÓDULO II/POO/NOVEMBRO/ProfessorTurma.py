class Professor:
    def __init__(self):
        self.__nome = ""
        self.__area = ""
    @property
    def nome(self):
        return self.__nome
    @nome.setter
    def nome(self, nome):
        self.__nome = nome.upper()
    @property
    def area(self):
        return self.__area
    @area.setter
    def area(self, area):
        self.__area = area.upper()
class Turma:
    def __init__(self):
        self.__codigo = 0
        self.__semestre = 0.0
        self.__professor = ""
    @property
    def codigo(self):
        return self.__codigo
    @codigo.setter
    def codigo(self, codigo):
        self.__codigo = codigo
    @property
    def semestre(self):
        return self.__semestre
    @semestre.setter
    def semestre(self, semestre):
        self.__semestre = semestre
    @property
    def professor(self):
        return self.__professor
    @professor.setter
    def professor(self, professor):
        self.__professor = professor
    def exibirresumo(self):
        print(f"O código dessa turma é: {self.__codigo}.")
        print(f"O professor da turma é o professor:{self.__professor.nome}")

manel = Professor()
ads = Turma()
manel.nome = "Manel"
manel.area = "Engenharia de Software"
ads.codigo = 1
ads.semestre = 2025.2
ads.professor = manel

ads.exibirresumo()
        
