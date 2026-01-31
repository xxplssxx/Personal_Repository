from django.db import models

# Create your models here.
class Question(models.Model):
    """Cria a tabela de questões do nosso banco de dados"""
    question_text = models.TextField(max_length=200)
    pub_date = models.DateTimeField("date published")
    def __str__(self):
        return self.question_text
    

class Choice(models.Model):
    """Cria a tabela de escolhas para as questões do banco de dados"""
    question = models.ForeignKey(Question, on_delete=models.CASCADE)
    choice_text = models.TextField(max_length=200)
    votes = models.IntegerField(default=0)

    def __str__(self):
        return self.choice_text
    