# Definição da classe Node para representar um nó da árvore binária
class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

# Função não recursiva para contar o número de nós na árvore binária
def count_nodes(node):
    if node is None:
        return 0
    count = 0
    stack = [node]
    while stack:
        current = stack.pop()
        count += 1
        if current.left:
            stack.append(current.left)
        if current.right:
            stack.append(current.right)
    return count

# Função não recursiva para calcular a soma dos conteúdos de todos os nós na árvore binária
def sum_nodes(node):
    if node is None:
        return 0
    total_sum = 0
    stack = [node]
    while stack:
        current = stack.pop()
        total_sum += current.value
        if current.left:
            stack.append(current.left)
        if current.right:
            stack.append(current.right)
    return total_sum

# Função não recursiva para calcular a altura da árvore binária
def tree_height(node):
    if node is None:
        return 0
    height = 0
    level = [node]
    while level:
        next_level = []
        for current in level:
            if current.left:
                next_level.append(current.left)
            if current.right:
                next_level.append(current.right)
        if next_level:
            height += 1
        level = next_level
    return height