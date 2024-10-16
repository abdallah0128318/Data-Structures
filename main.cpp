#include <iostream>
#include <string>
#include "includes/DynamicArray/DynamicArray.h"
#include "includes/LinkedList/LinkedList.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    linkedlist<string> l;
    l.insertAtPosition("12", 1);
    l.insertAtPosition("13", 2);
    l.insertAtPosition("14", 3);
    l.insertAtPosition("15", 4);
    l.insertAtPosition("16", 5);
    l.insertAtPosition("11", 1);
    l.deleteFromPosition(3);
    l.printList();
    cout << "size = " << l.getListSize() << endl;
    return 0;
}
