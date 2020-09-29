// Stack implementation

#include <iostream>
#include "stack.h"
#include "gstack.h"

using namespace std;


int main(int argc, char *argv[]){
    // SimpleStack ss(10);
    Stack<int> ss(10);
    cout << "Stack: " << ss.empty() <<endl;
    cout << "Top: " << ss.getTop() <<endl;
    ss.pop();
    ss.push(3);
    cout << "Stack top: " << ss.getTop() <<endl;
    ss.pop();
    cout << "Stack top: " << ss.getTop() <<endl;
    return 0;

}