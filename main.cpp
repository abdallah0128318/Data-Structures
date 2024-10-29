#include <iostream>
#include <string>
#include "includes/deque/deque.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){
    Deque<string> dq;
    dq.pushFront("ali");
    dq.pushFront("kola");
    dq.pushRear("sarah");
    dq.pushRear("nour");
    dq.popFront();
    dq.popRear();
    cout << "front = " << dq.getFront() << endl;
    cout << "rear = " << dq.getRear() << endl;
    cout << "DQueue size = " << dq.getSize() << endl;
    dq.printDeque();

    return 0;
}
