def busca_sequencial(array, elemento):
    for i in range(len(array)):
        if array[i] == elemento:
            return i
    return -1


def busca_binaria(array, elemento):
    inicio = 0
    fim = len(array) - 1
    while inicio <= fim:
        meio = (inicio + fim) // 2
        if array[meio] == elemento:
            return meio
        elif array[meio] < elemento:
            inicio = meio + 1
        else:
            fim = meio - 1
    return -1

array = [53,30,14,39,9,23,34,49,72,61,84,79,2,3,27,31]
elemento = 34

# Busca sequencial
indice_sequencial = busca_sequencial(array, elemento)
if indice_sequencial != -1:
    print("Elemento encontrado na posição", indice_sequencial)
else:
    print("Elemento não encontrado")

# Busca binária
array.sort()  # É necessário que o array esteja ordenado para usar busca binária
indice_binaria = busca_binaria(array, elemento)
if indice_binaria != -1:
    print("Elemento encontrado na posição", indice_binaria)
else:
    print("Elemento não encontrado")