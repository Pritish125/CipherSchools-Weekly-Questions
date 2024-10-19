#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

Node* groupOddEven(Node* head) {
    if (!head || !head->next) return head;

    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;

    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead; // Link odd list to the even list

    return head;
}

void printList(Node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    if (n == 0) return 0;

    int val;
    cin >> val;
    Node* head = new Node(val);
    Node* current = head;

    for (int i = 1; i < n; i++) {
        cin >> val;
        current->next = new Node(val);
        current = current->next;
    }

    head = groupOddEven(head);
    printList(head);

    return 0;
}
