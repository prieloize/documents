import time
#Criando uma lista vazia
beatles = []

#Nome dos participantes da banda
beatles.append("John Lennon")
beatles.append("Paul McCartney")
beatles.append("George Harrison")

for i in range(2):
    if i == 1:
        print()
        membro_adicional = str(input('Escreva "Stu Sutcliffe" para adicioná-lo à banda: '))
        beatles.append(membro_adicional)
    else:
        membro_adicional = str(input('Escreva "Pete Best" para adicioná-lo à banda:'))
        beatles.append(membro_adicional)

print(beatles)
print()


# Remover Stu Sutcliffe e Pete Best da lista
del beatles[3:5] 

#adicionando Ringo Starr ao inicio da lista
beatles.insert(0, "Ringo Starr")

print("A formação final dos Beatles é:")
for member in beatles:
    print(member)

time.sleep(3)