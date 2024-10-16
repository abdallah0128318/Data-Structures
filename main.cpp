#include <iostream>
#include <string>
// #include "includes/DynamicArray/DynamicArray.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

struct Node{
    int value;
    Node* next;
};


class linkedlist {
private:
    Node* head;
    Node* tail;
    int size;
public:
    linkedlist(): head(nullptr), size(0){}


    void insertAtBegining(int value){
        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = head;
        head = newNode;
        size++;
    }

    int getListSize(){
        return size;
    }
    
    // if position = 1 so the value will be inserted at the begining
    // if u wanna add at the end of the list using 'insertAtPosition' method u can pass the position as a 'size + 1'
    void insertAtPosition(int value, int position){
        if(position < 1 || position > size + 1){
            cout << "Position is out of range\n";
            return;
        }

        if(position == 1){
            insertAtBegining(value);
            return;
        }
        else if(position == size + 1){
            insertAtEnd(value);
            return;
        }

        Node *newNode = new Node();
        newNode->value = value;

        Node *temp = head;
        while(--position > 1){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }

    void insertAtEnd(int value){
        if(size == 0){
            insertAtBegining(value);
            return;
        }
        Node *temp = head;
        while(temp->next){
            temp = temp->next;
        }
        Node *newNode = new Node();
        newNode->value = value;
        temp->next = newNode;
        newNode->next = nullptr;
        size++;
    }

    void printList(){
        if(!head){
            cout << "List is Empty\n";
            return;
        }
        Node* temp = head;
        while(temp){
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void deleteFromBegining(){
        if(size == 0){
            cout << "list is Empty\n";
            return;
        }
        Node *temp = head;
        head = head->next;
        // delete the dynamically allocated object 'the node in this case'. 
        // so 'head' pointer points to a dynamically allocated memory. 
        // and we use 'temp' to store it so 'temp' points to a dynamically allocated memory. hence we can use 'delete' with it.
        delete temp;
        // set the pointer to nullptr and anyways it is a local variable the will be destroyed after the function ends.
        temp = nullptr;
        size--;
    }


    void deleteFromEnd(){
        if(size == 0){
            cout << "list is Empty\n";
            return;
        }

        Node *temp = head;
        for (int i = 1; i < size -1 ; i++)
        {
            temp = temp->next;
        }
        Node *nodeToDelete = temp->next;
        temp->next = nullptr;
        size--;
        // delte the node itself and set the pointer to 'nullptr' and it will be destroyed after the function ends.
        delete nodeToDelete;
        nodeToDelete = nullptr;
    }

    void deleteFromPosition(int position){
        if(size == 0){
            cout << "list is Empty\n";
            return;
        }
        else if(position == 1)
        {
            deleteFromBegining();
            return;
        }
        else if(position == size){
            deleteFromEnd();
            return;
        }
        else{
            Node *temp = head;
            while(--position > 1){
                temp = temp->next;
            }
            Node *nodeToDelete = temp->next;
            temp->next = nodeToDelete->next;
            nodeToDelete->next = nullptr;
            delete nodeToDelete;
            size--;
        }
    }


};

int main(){
    linkedlist l;
    l.insertAtPosition(12, 1);
    l.insertAtPosition(13, 2);
    l.insertAtPosition(14, 3);
    l.insertAtPosition(15, 4);
    l.insertAtPosition(16, 5);
    l.insertAtPosition(11, 1);
    // l.deleteFromEnd();
    l.deleteFromPosition(6);
    l.printList();
    cout << "size = " << l.getListSize() << endl;
    return 0;
}
