from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def index(request):
    return HttpResponse("Oi, você tá no app polls index")

def detail(request, question_id):
    return HttpResponse("Você tá vendo os detalhes da questão:" %question_id)

def results(request, question_id):
    return HttpResponse("Você tá vendo os resultados da questão:" %question_id)


def vote(request, question_id):
    return HttpResponse("Você tá votando na questão:" %question_id)
