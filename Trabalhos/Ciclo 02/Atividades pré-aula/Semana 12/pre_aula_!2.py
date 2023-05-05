class BinaryTree:
    def __init__(self):
        self.tree = []

    def create_tree(self, root_value):
        self.tree.append(root_value)

    def insert_node(self, value):
        self.tree.append(value)
        parent_index = len(self.tree) // 2 - 1
        if self.tree[parent_index] is None:
            self.tree[parent_index] = value


tree = BinaryTree()
tree.create_tree(53)
tree.insert_node(30)
tree.insert_node(14)
tree.insert_node(39)
tree.insert_node(9)
tree.insert_node(23)
tree.insert_node(34)
tree.insert_node(49)
tree.insert_node(72)
tree.insert_node(61)
tree.insert_node(84)
tree.insert_node(79)
tree.insert_node(2)
tree.insert_node(3)
tree.insert_node(27)
tree.insert_node(31)

print(tree.tree)