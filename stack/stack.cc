#include <iostream>
#include "stack.h"
using namespace std;


SimpleStack::SimpleStack(){
    vect = new int[100];
    max_size = 99;
    top = -1;
}
SimpleStack::~SimpleStack(){
    delete[] vect;
}
void SimpleStack::push(int e){
    if (top == max_size)
        cout << "Full stack" << endl;
    else
        vect[++top] = e;
}
void SimpleStack::pop(){
    if (top == -1) cout << "Empty stack" << endl;
    else
        top--;
}
int SimpleStack::getTop(){
    if (top == -1) return 0;
    return vect[top];
}
int SimpleStack::empty(){
    return (top == -1);
}
