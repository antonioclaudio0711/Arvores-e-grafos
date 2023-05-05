class No:
    def __init__(self, valor):
        self.valor = valor
        self.esquerda = None
        self.direita = None

class ABB:
    def __init__(self):
        self.raiz = None
    
    def inserir(self, valor):
        novo_no = No(valor)
        if self.raiz is None:
            self.raiz = novo_no
        else:
            no_atual = self.raiz
            while True:
                if valor < no_atual.valor:
                    if no_atual.esquerda is None:
                        no_atual.esquerda = novo_no
                        break
                    else:
                        no_atual = no_atual.esquerda
                elif valor > no_atual.valor:
                    if no_atual.direita is None:
                        no_atual.direita = novo_no
                        break
                    else:
                        no_atual = no_atual.direita
                else:
                    # valor já existe na árvore
                    break
                    
    def pre_ordem(self, no_atual): # raíz -> esquerda -> direita
        if no_atual is not None:
            print(no_atual.valor, end=" ")
            self.pre_ordem(no_atual.esquerda)
            self.pre_ordem(no_atual.direita)
            
    def em_ordem(self, no_atual): # esquerda -> raíz -> direita
        if no_atual is not None:
            self.em_ordem(no_atual.esquerda)
            print(no_atual.valor, end=" ")
            self.em_ordem(no_atual.direita)
            
    def pos_ordem(self, no_atual): # esquerda -> direita -> raíz
        if no_atual is not None:
            self.pos_ordem(no_atual.esquerda)
            self.pos_ordem(no_atual.direita)
            print(no_atual.valor, end=" ")


arvoreABB = ABB()
valores = [53,30,14,39,9,23,34,49,72,61,84,79,2,3,27,31]
for valor in valores:
    arvoreABB.inserir(valor)

print('Pré-ordem')
arvoreABB.pre_ordem(arvoreABB.raiz)
print('\n---------------------------------------')

print()

print('Em ordem')
arvoreABB.em_ordem(arvoreABB.raiz)
print('\n---------------------------------------')

print()

print('Pós-ordem')
arvoreABB.pos_ordem(arvoreABB.raiz)
print('\n---------------------------------------')