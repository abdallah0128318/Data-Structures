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

    void deleteBegin(){
        if(empty()){
            cout << "List is Empty\n";
            return;
        }
        else{
            Node *temp = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;
            size--;
        }
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