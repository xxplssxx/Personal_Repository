#13. Crie um programa modular com funções para ler dados,
# verificar maioridade e exibir resultado.
def LeituraDados(nome, idade):
    nome = input("Digite seu nome:")
    idade = int(input("Digite sua idade:"))
    return nome, idade
def VerificarMaioridade(idade):
    if idade>=18:
        print("Você é maior de idade.")
        
nome, idade = LeituraDados("", 0)
print(nome)
print(idade)
