#include <iostream>
using namespace std;

// Define a node structure
struct Node {
    int data;      // Data part of the node
    Node* next;    // Pointer to the next node
};

// Function to insert a node at the end of the list
void insertAtEnd(Node** head, int newData) {
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    // If the list is empty, make the new node as the head
    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    // Otherwise, find the last node
    Node* temp = *head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Insert the new node at the end
    temp->next = newNode;
}

// Function to delete a node by its value
void deleteNode(Node** head, int key) {
    // Store head node
    Node* temp = *head;
    Node* prev = nullptr;

    // If the head node itself holds the key to be deleted
    if (temp != nullptr && temp->data == key) {
        *head = temp->next; // Change head
        delete temp;        // Free the memory of old head
        return;
    }

    // Search for the key to be deleted
    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the key was not found in the list
    if (temp == nullptr) {
        cout << "Key " << key << " not found in the list." << endl;
        return;
    }

    // Unlink the node from the linked list and free memory
    prev->next = temp->next;
    delete temp;
}

// Function to display the linked list
void printList(Node* node) {
    if (node == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    while (node != nullptr) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;  // Create an empty linked list

    // Display the list before insertion
    cout << "Linked List before insertion: ";
    printList(head);

    // Inserting nodes
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    // Display the list after insertion
    cout << "Linked List after insertion: ";
    printList(head);

    // Display the list before deletion
    cout << "Linked List before deletion of 20: ";
    printList(head);

    // Deleting a node
    deleteNode(&head, 20);

    // Display the list after deletion
    cout << "Linked List after deletion of 20: ";
    printList(head);

    return 0;
}
