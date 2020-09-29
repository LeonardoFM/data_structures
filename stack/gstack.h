#include <iostream>
using namespace std;

template<class Type>
class Stack{
private:
    Type * vect;
    int max_size;
    int top;

public:
    Stack<Type>(int size){
        vect = new int[size];
        max_size = 99;
        top = -1;
    }
    ~Stack<Type>(){
        delete[] vect;
    }

    void push(int e){
        if (top == max_size)
            cout << "Full stack" << endl;
        else
            vect[++top] = e;
    }
    void pop(){
        if (top == -1) cout << "Empty stack" << endl;
        else
            top--;
    }
    Type getTop(){
        if (top == -1) return 0;
        return vect[top];
    }
    int empty(){
        return (top == -1);
    }

};
