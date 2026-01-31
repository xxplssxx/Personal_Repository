#7. Crie uma função que calcule a área de um retângulo.
#8. Crie uma função que receba uma lista e retorne a média, o maior e o menor valor.
#9. Crie uma função que converta Celsius para Fahrenheit.
#10. Crie uma função que calcule o fatorial de um número inteiro.
#11. Crie uma função de saudação com parâmetro padrão para o nome do curso.
#12. Implemente uma função que valide senhas (mínimo 8 caracteres e 1 número).
#13. Crie um programa modular com funções para ler dados, verificar maioridade e exibir resultado.
#14. Desenvolva um menu interativo com funções para cadastrar e listar pessoas (Desafio Integrador)
def CalcularRetangulo(base, altura):

    return base*altura

def MediaMaiorMenor():

    lista = [1,2,3,4,5,6,6,6,7,8]

    soma=0

    maior=lista[9]

    menor=lista[0]

    for i in lista:

        soma+=lista[i]

        if menor>lista[i]:

            menor==lista[i]

        if maior<lista[i]:

            maior==lista[i]

    media = soma / len(lista)

    print(f"A média é: {media}. O maior número é: {maior}. O menor número é: {menor}")

def CelsiusFarenheint(celsius):
    farenheint = (celsius*1.8) + 32
    return farenheint
def Fatorial(fator):
    while fator>0:
        resultado = fator*(fator-1)
        fator-=1
        break #Perguntar pro professor.
    return resultado
def SaudacaoPadrao():
    curso = input("Qual curso você faz?")
    return curso
def ValidarSenha():
    senha = input("Qual a senha que você deseja colocar?")
    verificadornumero=any(c.isdigit() for c in senha)
    if verificadornumero==True:
        print("Tem número na senha.")
        if len(senha)<8:
            print("Senha inválida, Coloque pelo menos 8 caracteres.")
        else:
            print("Senha válida, Mínimo de caracteres atingidos e exigência do número cumprida.")
    else:
        print("Senha inválida, não tem número nela.")
    


print(f"A área do retângulo é: {CalcularRetangulo(5, 4)}")
MediaMaiorMenor()
print(f"O valor em Farenheint é de:{CelsiusFarenheint(30)}graus.")
print(f"O resultado do fatorial é:{Fatorial(3)}")
print(f"Seja bem vindo ao curso de:{SaudacaoPadrao()}")
ValidarSenha()
