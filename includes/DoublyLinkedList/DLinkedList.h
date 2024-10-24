#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

template <typename T>

class DList{
private:
    struct Node {
        T value;
        Node* prev;
        Node* next;
        Node(T val): value(val), prev(nullptr), next(nullptr){};
    };
    Node* head;
    Node* tail;
    int size;

public:

    DList():size(0){}
    
    bool empty(){
        return size == 0;
    }

    int getSize(){
        return size;
    }

    void insertBegin(T value){
        if(empty()){
            Node* newNode = new Node(value);
            tail = head = newNode;
            size++;
        }
        else{
            Node* newNode = new Node(value);
            head->prev = newNode;
            newNode->next = head;
            head = newNode;            
            size++;
        }
    }

    void insertEnd(T value){
        if(empty()){
            Node* newNode = new Node(value);
            tail = head = newNode;
            size++;
        }
        else{
            Node* newNode = new Node(value);
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;            
            size++;
        }
    }

    void deleteBegin() {
    if (empty()) {
        cout << "List is Empty\n";
        return;
    }

    Node *temp = head;

    // If there is only one node in the list
    if (head == tail) {
        head = tail = nullptr; // Update both head and tail to null
    } else {
        head = head->next;     // Move head to the next node
        head->prev = nullptr;  // Update the new head's previous pointer
    }

    delete temp;
    size--;
}



    void deleteEnd(){
        if(empty()){
            cout << "List is Empty\n";
            return;
        }
        else{
            Node *temp = head;
            head = head->next;
            head->prev = nullptr;
            delete temp;
            size--;
        }
    }


    void deleteAtPosition(int position) {
        // Check if the list is empty
        if (empty()) {
            cout << "List is Empty\n";
            return;
        }

        // Check if the position is valid
        if (position < 1 || position > size) {
            cout << "Invalid position\n";
            return;
        }

        // If the position is at the beginning, use deleteBegin
        if (position == 1) {
            deleteBegin();
            return;
        }

        // If the position is at the end, use deleteEnd
        if (position == size) {
            deleteEnd();
            return;
        }

        // Traverse to the node at the specified position
        Node* temp = head;
        for (int i = 1; i < position; ++i) {
            temp = temp->next;
        }

        // Update links of the previous and next nodes
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        // Delete the temp node
        delete temp;
        size--;
    }


    void printList(){
        if(empty()){
            cout << "List is Empty\n";
            return;
        }
        Node* temp = head;
        cout << "List elemnets: \n";
        while(temp){
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};