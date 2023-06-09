# Definição da classe Node para representar um nó da árvore binária
class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

# Função recursiva para contar o número de nós na árvore binária
def count_nodes(node):
    if node is None:
        return 0
    return 1 + count_nodes(node.left) + count_nodes(node.right)

# Função recursiva para calcular a soma dos conteúdos de todos os nós na árvore binária
def sum_nodes(node):
    if node is None:
        return 0
    return node.value + sum_nodes(node.left) + sum_nodes(node.right)

# Função recursiva para calcular a altura da árvore binária
def tree_height(node):
    if node is None:
        return 0
    left_height = tree_height(node.left)
    right_height = tree_height(node.right)
    return max(left_height, right_height) + 1