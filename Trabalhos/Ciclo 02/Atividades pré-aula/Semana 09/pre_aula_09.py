class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def search_linked_list(head, target):
    current = head
    position = 0
    while current is not None:
        if current.data == target:
            return position
        current = current.next
        position += 1
    return -1

head = Node(3)
head.next = Node(7)
head.next.next = Node(11)
head.next.next.next = Node(5)
head.next.next.next.next = Node(2)

target = 5
position = search_linked_list(head, target)
print(position) # Saída: 3