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

    def build_tree(self, num_list):
        duplicates = []
        for num in num_list:
            if num in self.tree:
                duplicates.append(num)
            else:
                self.insert_node(num)
        return duplicates
    

tree = BinaryTree()
tree.create_tree(10)
tree.insert_node(5)
tree.insert_node(15)
tree.insert_node(3)
tree.insert_node(7)
tree.insert_node(12)
tree.insert_node(20)

print(tree.tree)