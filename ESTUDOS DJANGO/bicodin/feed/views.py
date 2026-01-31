from django.shortcuts import render
from .models import Fornecedor
from .models import Postagem

# Create your views here.
def index(request):
    """Página principal"""
    return render(request, 'feed/index.html')
def fornecedores(request):
    """Mostra os fornecedores de Serviço"""
    fornecedordb = Fornecedor.objects.order_by("id")
    postagemdb = Postagem.objects.order_by("date_added")
    # combine os dados em um único dicionário de contexto
    context = {
        'fornecedordb': fornecedordb,
        'postagemdb': postagemdb,
    }
    return render(request, 'feed/fornecedores.html', context)
def fornecedor(request, fornecedor_id):
    fornecedordb=Fornecedor.objects.get(id = fornecedor_id)
    postagemdb = fornecedordb.postagem_set.order_by("-date_added")
    context = {
        'fornecedordb': fornecedordb,
        'postagemdb': postagemdb,
    }
    return render(request, 'feed/fornecedor.html', context)