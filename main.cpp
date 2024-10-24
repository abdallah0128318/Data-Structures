#include <iostream>
#include <string>
#include "includes/DoublyLinkedList/DLinkedList.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){

    DList<int> dl;
    dl.insertBegin(15);
    dl.insertBegin(20);
    dl.insertBegin(30);
    dl.insertEnd(10);
    dl.insertEnd(5);
    dl.deleteEnd();
    dl.deleteBegin();

    cout << "size = " << dl.getSize() << endl;
    dl.printList();

    return 0;
}
