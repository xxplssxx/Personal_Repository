from time import sleep
dias=('Domingo', 'Segunda', 'Terça', 'Quarta', 'Quinta', 'Sexta', 'Sábado')
dia= int(input("Digite qual dia da semana você está:\n0-Domingo\n1-Segunda\n2-Terça\n3-Quarta\n4-Quinta\n5-Sexta\n6-Sábado\n"))
if dia == 0:
    print("Hoje é: ", dias[0])
elif dia == 1:
    print("Hoje é: ", dias[1])
elif dia == 2:
    print("Hoje é: ", dias[2])
elif dia == 3:
    print("Hoje é: ",dias[3])
elif dia == 4:
    print("Hoje é: ",dias[4])
elif dia == 5:
    print("Hoje é: ",dias[5])
elif dia == 6:
    print("Hoje é: ",dias[6])
else:
    print("O dia não existe.")
for i in range(len(dias)):
    sleep(1)
    print("O número atual é: ", i+1)


