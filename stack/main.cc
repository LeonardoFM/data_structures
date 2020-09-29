// Stack implementation

#include <iostream>

using namespace std;

class SimpleStack{
private:
    int * vect;
    int max_size;
    int top;

public:
    SimpleStack(){
        vect = new int[100];
        max_size = 99;
        top = -1;
    }
    ~SimpleStack(){
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
    int getTop(){
        if (top == -1) return 0;
        return vect[top];
    }
    int empty(){
        return (top == -1);
    }
};

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