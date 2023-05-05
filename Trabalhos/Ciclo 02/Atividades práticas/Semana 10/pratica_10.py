def busca_sequencial(arranjo, elemento):
    """Realiza busca sequencial em um arranjo ordenado"""
    comp = 0
    for i in range(len(arranjo)):
        comp += 1
        if arranjo[i] == elemento:
            return comp
    raise ValueError("Elemento não encontrado no arranjo!")

def busca_binaria(arranjo, elemento):
    """Realiza busca binária em um arranjo ordenado"""
    inicio = 0
    fim = len(arranjo) - 1
    comp = 0
    while inicio <= fim:
        meio = (inicio + fim) // 2
        comp += 1
        if arranjo[meio] == elemento:
            return comp
        elif arranjo[meio] < elemento:
            inicio = meio + 1
        else:
            fim = meio - 1
    raise ValueError("Elemento não encontrado no arranjo!")

# arranjo de exemplo
arranjo = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 17, 22, 35, 39, 41, 44, 47, 48, 49, 51, 55, 64, 67, 87, 89, 99, 100]

# busca sequencial pelo elemento 44
try:
    comp_seq = busca_sequencial(arranjo, 11)
    print(f"Busca sequencial: o elemento 44 foi encontrado em {comp_seq} comparações.")
except ValueError as e:
    print(e)

# busca binária pelo elemento 44
try:
    comp_bin = busca_binaria(arranjo, 44)
    print(f"Busca binária: o elemento 44 foi encontrado em {comp_bin} comparações.")
except ValueError as e:
    print(e)