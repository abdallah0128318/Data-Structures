#include <iostream>
#include <climits>
using std::string;
using std::cout;
using std::cin;
using std::endl;

// Here is a LinkedQueue that was built using linkedList specifically singly linkedList.   
template <typename T>
class LinkedQueue {
private:
     struct Node {
        T value;
        Node* next;
        Node(T val): value(val),next(nullptr){};
    };
    Node* front;
    Node* rear;

public:
    LinkedQueue(): front(nullptr),rear(nullptr){}

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


// Here I`m gonna build a queue using something called circular array.
template <typename T>
class ArrayBasedQueue
{
private:
    int front;
    int rear;
    // length is the actual number of elements in the array 
    // but capacity is the max number of element that array can contain
    // so if I have an array that can store 100 element and I insert 5 elements 
    // so the length is 5 and the capacity is 100
    int length;
    int capacity;
    T* arr;
public:
    ArrayBasedQueue(int c){
        capacity = c;
        arr = new T[capacity];
        front = 0;
        rear = capacity - 1;
    }

    bool isEmpty(){
        return length == 0;
    }

    bool isFull(){
        return length == capacity;
    }

    void enqueue(T Element){
        if(isFull()){
            cout << "Queue is Full ... can`t enqueue\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = Element;
        length++;
    }

    void dequeue(){
        if (isEmpty())
        {
            cout << "Queue is Empty ... can`t dequeue\n";
            return;
        }
        front = (front + 1) % capacity;
        length--;
    }


    void printQueue(){
        for (int i = front; i != rear; i = (i + 1) % capacity)
        {
            cout << arr[i] << endl;
        }
        cout << arr[rear] << endl;
    }


    T getFront(){
        return arr[front];
    }
    
    T getRear(){
        return arr[rear];
    }

    int getLength(){
        return length;
    }


    ~ArrayBasedQueue(){
        // take it a rule to be a diciplined cpp programmer. 
        // 'new' and 'delete' are in a catholic marriage relationship
        // so if u use 'new' to dynamically allocate any memory u have to use 'delete' to free this memort 
        // otherwise it will lead to a memory leaks problem. alright!
        delete arr;
    }

};

