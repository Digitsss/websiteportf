#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main() {

Node *nodeA = new Node;
nodeA->data = 10;
nodeA->next = nullptr;

Node *nodeB = new Node;
nodeB->data = 99;
nodeB->next = nullptr;

Node *nodeC = new Node;
nodeC->data = 30;
nodeC->next = nullptr;

nodeA->next = nodeC;

cout << "Before insertion:" << endl;
Node *current = nodeA;

while (current != nullptr) {
    cout << current->data << " -> ";
    current = current->next;
}

cout << "nullptr" << endl;

nodeB->next = nodeA->next;
nodeA->next = nodeB;

Node *nodeD = new Node;
nodeD->data = 40;
nodeD->next = nullptr;

nodeD->next = nodeB->next;
nodeB->next = nodeD;

cout << "After insertion:" << endl;
current = nodeA;

while (current != nullptr) {
    cout << current->data << " -> ";
    current = current->next;
}

cout << "nullptr" << endl;

delete nodeA;
delete nodeB;
delete nodeC;
delete nodeD;

return 0;
}
