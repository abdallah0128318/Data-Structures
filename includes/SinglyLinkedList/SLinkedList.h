#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;


template <typename T>

struct Node{
    T value;
    Node* next;
};

template <typename K>
class linkedlist {
private:
    Node<K> *head;
    int size;
public:
    linkedlist(): head(nullptr), size(0){}


    void insertAtBegining(K value){
        Node<K>* newNode = new Node<K>();
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
    void insertAtPosition(K value, int position){
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

        Node<K> *newNode = new Node<K>();
        newNode->value = value;

        Node<K> *temp = head;
        while(--position > 1){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }

    void insertAtEnd(K value){
        if(size == 0){
            insertAtBegining(value);
            return;
        }
        Node<K> *temp = head;
        while(temp->next){
            temp = temp->next;
        }
        Node<K> *newNode = new Node<K>();
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
        Node<K> *temp = head;
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
        Node<K> *temp = head;
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

        Node<K> *temp = head;
        for (int i = 1; i < size -1 ; i++)
        {
            temp = temp->next;
        }
        Node<K> *nodeToDelete = temp->next;
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
        else if(position < 1 || position > size){
            cout << "Position is out of range\n";
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
            Node<K> *temp = head;
            while(--position > 1){
                temp = temp->next;
            }
            Node<K> *nodeToDelete = temp->next;
            temp->next = nodeToDelete->next;
            nodeToDelete->next = nullptr;
            delete nodeToDelete;
            size--;
        }
    }

};