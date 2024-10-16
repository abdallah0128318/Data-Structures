#include <iostream>
#include <string>
#include "includes/Stack/Stack.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    Stack <int> s;
    s.push(15);
    s.push(20);
    s.push(30);
    int y = 0;
    s.pop(y);
    cout << "popped value = " << y << endl;
    s.printStack();
    return 0;
}
