#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

template <typename T>

class Deque{
private:
    struct Node {
        T value;
        Node* prev;
        Node* next;
        Node(T val): value(val), prev(nullptr), next(nullptr){};
    };
    Node* front;
    Node* rear;
    int size;

public:

    Deque():size(0), front(nullptr), rear(nullptr){}

    ~Deque(){
        while(!empty()){
            popFront();
        }
    }
    
    bool empty(){
        return size == 0;
    }


    void pushFront(T value){
        if(empty()){
            Node* newNode = new Node(value);
            rear = front = newNode;
            size++;
        }
        else{
            Node* newNode = new Node(value);
            front->prev = newNode;
            newNode->next = front;
            front = newNode;            
            size++;
        }
    }

    void pushRear(T value){
        if(empty()){
            Node* newNode = new Node(value);
            rear = front = newNode;
            size++;
        }
        else{
            Node* newNode = new Node(value);
            newNode->prev = rear;
            rear->next = newNode;
            rear = newNode;            
            size++;
        }
    }


    void popFront() {
        if (empty()) {
            cout << "List is Empty\n";
            return;
        }

        Node *temp = front;

        // If there is only one node in the list
        if (front == rear) {
            front = rear = nullptr; // Update both front and rear to null
        } else {
            front = front->next;     // Move front to the next node
            front->prev = nullptr;  // Update the new front's previous pointer
        }

        delete temp;
        size--;
    }



    void popRear(){
        if(empty()){
            cout << "List is Empty\n";
            return;
        }
        else{
            Node *temp = rear;
            if(front == rear){
                front = rear = nullptr;
            }
            else{
                rear = rear->prev;
                rear->next = nullptr;
            }
            
            delete temp;
            size--;
        }
    }

    void printDeque(){
        if(empty()){
            cout << "List is Empty\n";
            return;
        }
        Node* temp = front;
        cout << "Elements: \n";
        while(temp){
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }


    T getFront(){
        return front->value;
    }

    T getRear(){
        return rear->value;
    }

    int getSize(){
        return size;
    }



};