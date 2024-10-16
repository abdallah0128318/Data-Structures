#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

// here I`m gonna build a stack using singly linkedlist

template <typename T>

struct Node{
    T value;
    Node* next;
};

template <typename K>
class Stack {
private:
    Node<K> *top;
    int size;
public:
    Stack(): top(nullptr), size(0){}


    void push(K value){
        if(size == 0){
            Node<K>* newNode = new Node<K>();
            newNode->value = value;
            newNode->next = top;
            top = newNode;
        }
        else{
            Node<K>* newNode = new Node<K>();
            newNode->value = value;
            newNode->next = top;
            top = newNode;
        }
        size++;
    }

    void pop(K &nodeData){
        if(size == 0){
            cout << "Stack is Empty\n";
            return;
        }
        else{
            Node <K> *nodeToDelete = top;
            top = nodeToDelete->next;
            nodeData = nodeToDelete->value;
            delete nodeToDelete;
            nodeToDelete = nullptr;
        }
    }

    int getListSize(){
        return size;
    }
    

    void printStack(){
        if(!top){
            cout << "List is Empty\n";
            return;
        }
        Node<K> *temp = top;
        while(temp){
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

};