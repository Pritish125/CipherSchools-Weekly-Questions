#include <iostream>

struct Node {
    int data;
    Node* next;
};

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Creating the linked list: 10 -> 20 -> 30 -> 40
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};
    head->next->next->next = new Node{40, nullptr};

    // Printing the linked list
    printLinkedList(head);

    // Clean up memory (not shown here for brevity)

    return 0;
}
