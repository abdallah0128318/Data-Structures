#include <iostream>
#include <string>
#include <list>
#include "includes/queue/queue.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::list;
using std::next;

int main(){
    Queue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.dequeue();
    q.dequeue();
    // cout << q.getFront() << endl;
    q.printQueue();
    return 0;
}
