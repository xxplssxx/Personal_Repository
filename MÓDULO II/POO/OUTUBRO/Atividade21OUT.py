#Questão1
class Caneta:
    def __init__(self, cor, marca):
        self.cor = cor
        self.marca = marca
    def escrever(self):
        print(f'Eu escrevi essa frase com uma caneta de cor: {self.cor} e da marca: {self.marca}')
#Questão2
class Caderno:
    def __init__(self):
        self.materia = ''
        self.folhas= 0
    def __str__(self):
        return f'O caderno da matéria {self.materia} tem {self.folhas} folhas.'
#Questão3
class Professor:
    def __init__(self, nome, disciplina):
        self.nome = nome
        self.disciplina = disciplina
    def dar_aula(self):
        print(f"A aula de {self.disciplina} está sendo ministrada pelo professor {self.nome}")
#Questão4
class Aluno:
    def __init__(self, nome, curso, presencas):
        self.nome = nome
        self.curso = curso
        self.presencas = presencas
    def __str__(self):
        return f'O aluno {self.nome} do curso {self.curso} tem {self.presencas} presenças'
#Questão9
class Turma:
    def __init__(self):
        self.lista_alunos = []
    def adicionar_aluno(self, aluno):
        self.lista_alunos.append(aluno)
    def __str__(self):
        return f'Essa turma tem os alunos:{self.lista_alunos}'
    
    
        

#Programa principal(instanciamentos)
#Questão1
bic = Caneta("Azul", "Bic")
print(bic.escrever())
#Questão2
matematica = Caderno()
matematica.materia = 'matemática'
matematica.folhas = 50
print(matematica)
#Questão3
pedro= Professor("Lucas", "Informática")
pedro.dar_aula()
#Questão4


#Questão5
pedroaluno = Aluno("Predo", "ADS", 400)
arturaluno = Aluno("Arthur", "Direito", 500)
print(pedroaluno)
print(arturaluno)
#Questão9
turmaADS = Turma()
turmaADS.adicionar_aluno(pedroaluno)
turmaADS.adicionar_aluno(arturaluno)

# Exibe cada aluno usando o __str__ definido em Aluno
print('Essa turma tem os alunos:')
for aluno in turmaADS.lista_alunos:
    print('-', aluno)


# ======== Exemplo de classe base Animal e subclasses Cachorro e Gato ========
class Animal:
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    def falar(self):
        return "Som de animal"

    def __str__(self):
        return f"{self.__class__.__name__} {self.nome}, {self.idade} anos"


class Cachorro(Animal):
    def __init__(self, nome, idade, raca=None):
        super().__init__(nome, idade)
        self.raca = raca

    def falar(self):
        return "Au au!"

    def brincar(self):
        return f"{self.nome} está brincando."


class Gato(Animal):
    def __init__(self, nome, idade, pelagem=None):
        super().__init__(nome, idade)
        self.pelagem = pelagem

    def falar(self):
        return "Miau!"

    def dormir(self):
        return f"{self.nome} está dormindo."


if __name__ == "__main__":
    # Demo rápido das subclasses
    rex = Cachorro("Rex", 3, "Vira-lata")
    mimi = Gato("Mimi", 2, "Curta")

    print()  # linha em branco para separar a saída
    print(rex)
    print(rex.falar())
    print(rex.brincar())
    print()
    print(mimi)
    mimi.falar()
    print(mimi.dormir())



