from django.db import models

class Pessoa(models.Model):
    nome = models.CharField(max_length=100)
    cpf = models.IntegerField(max_length=11)

    def __str__(self):
        return self.nome

    

class Fornecedor(models.Model):
    """Classe que guarda usuários Fornecedores do sistema"""
    nametag = models.CharField(max_length=20)
    pessoa = models.ForeignKey(Pessoa, on_delete=models.CASCADE)


    def __str__(self):
        """Retorna o "arroba" do usuário"""
        return self.nametag
    class Meta:
        verbose_name_plural = 'Fornecedores'
class Postagem(models.Model):
    """Classe que irá definir a tabela que guarda informações sobre cada Post"""
    caption = models.CharField(max_length=500)
    date_added = models.DateTimeField(auto_now_add=True)
    user = models.ForeignKey(Fornecedor, on_delete=models.CASCADE)

    def __str__(self):
        """Retorna a legenda da postagem, somente os primeiros 50 caracteres"""
        return self.caption[:50] + '[...]'
    class Meta:
        verbose_name_plural = 'Postagens'

