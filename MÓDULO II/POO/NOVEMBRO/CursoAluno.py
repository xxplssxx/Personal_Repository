class Aluno:
    def __init__(self):
        self.__nome = ""
        self.__matricula = ""


    @property
    def nome(self):
        return self.__nome
    @nome.setter
    def nome(self, nome):
            self.__nome = nome.upper()

    @property
    def matricula(self):
        return self.__matricula
    @matricula.setter
    def matricula(self, matricula):
        self.__matricula = matricula.upper()
    

#Chamadas
pedro = Aluno()
pedro.nota = 10
print(f"Nota: {pedro.nota}")

messias = Aluno()
messias.nota = -8
print(f"Nota: {messias.nota}")