#include <iostream>
#include <climits>
using std::string;
using std::cout;
using std::cin;
using std::endl;


template <typename T>


class Queue {
private:
     struct Node {
        T value;
        Node* next;
        Node(T val): value(val),next(nullptr){};
    };
    Node* front;
    Node* rear;

public:
    Queue(): front(nullptr),rear(nullptr), size(0){}

    bool empty(){
        return front == nullptr;
    }


    void enqueue(T value){
        Node* newNode = new Node(value);
        if(empty()){
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
        return;
    }

    void dequeue(){
        if(empty()){
            cout << "Queue is Empty\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        if(!front) rear = nullptr;
        delete temp;
        return;
    }

     int getFront() {
      
      // Checking if the queue is empty
        if (empty()) {
            cout << "Queue is empty\n";
            return INT_MIN;
        }
        return front->value;
    }

    int getRear() {

      // Checking if the queue is empty
        if (empty()) {
            cout << "Queue is empty\n";
            return INT_MIN;
        }
      
        return rear->value;
    }

    void printQueue(){
        if (empty()) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = front;
        while(temp){
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

};