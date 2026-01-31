from django.contrib import admin

# Register your models here.
from feed.models import Postagem
from feed.models import Fornecedor
admin.site.register(Postagem)
admin.site.register(Fornecedor)
from feed.models import Pessoa
admin.site.register(Pessoa)
