#include <iostream>
#include <cstdlib> // For malloc and free
using namespace std;

// Define the structure of a node in the linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the beginning
void insertAtBeginning(Node*& head, int value) {
    // Allocate memory using malloc
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return;
    }
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    cout << "Inserted " << value << " at the beginning.\n";
}



// Function to display the list
void displayList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    cout << "List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function to demonstrate insertion and deletion operations
int main() {
    Node* head = nullptr; // Initially, the list is empty

    // Display the list initially (it will be empty)
    displayList(head);

    // Insert nodes at the beginning
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    displayList(head);
    return 0;
}
