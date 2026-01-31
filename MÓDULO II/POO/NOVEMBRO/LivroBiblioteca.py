from datetime import date
class Livro:
    def __init__(self):
        self.__titulo = ""
        self.__autor = ""
        self.__ano = 0

    @property
    def titulo(self):
        return self.__titulo
    @titulo.setter
    def titulo(self, titulo):
        self.__titulo = titulo.upper()

    @property
    def autor(self):
        return self.__autor
    @autor.setter
    def autor(self, autor):
        self.__autor = autor.upper()

    @property
    def ano(self):
        if self.__ano<0:
            return f"{self.__ano} A.C"
        else:
            return f"{self.__ano} D.C"
    @ano.setter
    def ano(self, ano):
        if ano>date.today().year:
            print("Ano inválido!")
            self.__ano = 0
        else:
            self.__ano = ano
class Biblioteca:
    def __init__(self):
        self.__nome = ""
        self.__listaLivros = []
    @property
    def nome(self):
        return self.__nome
    @nome.setter
    def nome(self, nome):
        self.__nome = nome
    @property
    def listaLivros(self):
        return self.__listaLivros
    @listaLivros.setter
    def listaLivros(self, listaLivros):
        self.__listaLivros = listaLivros
    #Método para adicionar livros à Biblioteca
    def adicionarLivros(self, livro):
        self.__listaLivros.append(livro)
    def listarLivros(self):
        for i in self.__listaLivros:
            print(f"{i.titulo} - {i.autor} - {i.ano}")
    def excluirLivro(self):
        excluido = input("Digite o nome do livro a ser excluido, exatamente igual ao que está na lista:")
        for i in self.__listaLivros:
            if excluido.upper() == i.titulo:
                self.__listaLivros.remove(i)
    

livro1=Livro()
livro2=Livro()
livro3=Livro()

livro1.titulo = "Cassacos andantes"
livro1.ano = 2025
livro1.autor = "Pedro Lucas"
livro2.titulo = "Cassacos voadores"
livro2.ano = 2024
livro2.autor = "Predo Lusca"
livro3.titulo = "Cassacos nadadores"
livro3.ano = 2023
livro3.autor = "Preto Luscas"

bibliotecaPedroII= Biblioteca()
bibliotecaPedroII.nome = "Leitura de PedroII"
bibliotecaPedroII.listaLivros = [livro1]
print("Antes da adição:")
for i in bibliotecaPedroII.listaLivros:
    print(f"{i.titulo} - {i.autor} - {i.ano}")
print("Depois da adição:")
bibliotecaPedroII.adicionarLivros(livro2)
bibliotecaPedroII.adicionarLivros(livro3)
bibliotecaPedroII.listarLivros()
bibliotecaPedroII.excluirLivro()
bibliotecaPedroII.listarLivros()