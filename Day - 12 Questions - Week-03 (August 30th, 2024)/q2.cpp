#include <iostream>

struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node{data, nullptr};
    if (head == nullptr) {
        // If the list is empty, the new node becomes the head
        head = newNode;
    } else {
        // Traverse to the end of the list
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        // Insert the new node at the end
        current->next = newNode;
    }
}

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
    // Creating the linked list: 10 -> 20 -> 30
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    // Inserting new data 40 at the end
    insertAtEnd(head, 40);

    // Printing the updated linked list
    printLinkedList(head);

    // Clean up memory (not shown here for brevity)

    return 0;
}
