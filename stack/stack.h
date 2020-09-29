#include <iostream>

class SimpleStack{
    private:
    int * vect;
    int max_size;
    int top;

public:
    SimpleStack();
    ~SimpleStack();
    void push(int e);
    void pop();
    int getTop();
    int empty();
};
