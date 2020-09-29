// Stack implementation

#include <iostream>
#include "stack.h"

using namespace std;


int main(int argc, char *argv[]){
    SimpleStack ss;

    cout << "Stack: " << ss.empty() <<endl;
    cout << "Top: " << ss.getTop() <<endl;
    ss.pop();
    ss.push(3);
    cout << "Stack top: " << ss.getTop() <<endl;
    ss.pop();
    cout << "Stack top: " << ss.getTop() <<endl;
    return 0;

}