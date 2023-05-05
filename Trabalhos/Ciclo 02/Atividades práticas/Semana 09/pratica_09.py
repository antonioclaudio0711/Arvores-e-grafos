vetor = [1, 2, 5, 7, 10, 12, 13, 14, 16, 20]

# Calcula a média do vetor
media = sum(vetor) / len(vetor)

# Inicializa o valor mais próximo e o número de comparações
valor_mais_proximo = vetor[0]
num_comparacoes = 0

# Percorre o vetor usando busca sequencial
for valor in vetor:
    num_comparacoes += 1
    # Verifica se o valor atual é mais próximo da média do que o valor anteriormente mais próximo
    if abs(valor - media) < abs(valor_mais_proximo - media):
        valor_mais_proximo = valor

# Mostra o valor mais próximo, a média e o número de comparações
print("Valor mais próximo da média:", valor_mais_proximo)
print("Média do vetor:", media)
print("Número de comparações:", num_comparacoes)