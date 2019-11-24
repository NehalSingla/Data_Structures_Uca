#include <iostream>
using namespace std;

#define CAPACITY 1000 

class Stack {
        int top;

public:
        char a[CAPACITY];
        Stack() {
         top = -1;
        }

        bool push(char x)
        {
        if (top >= (CAPACITY - 1)) {
                cout << "Stack Overflow";
                return false;
        }
        else {
                a[++top] = x;

                return true;
        }
        }

        int pop()
        {
        if (top < 0) {
                cout << "Stack Underflow";
                return 0;
        }
        else {
                char x = a[top--];
                return x;
        }
        }
        int peek()
        {
        if (top < 0) {
                cout << "Stack is Empty";
                return 0;
        }
        else {
                char x = a[top];
                return x;
        }
        }

        bool isEmpty()
        {
        return (top < 0);
        }
};
int main() {
        class Stack new1;
        bool d=new1.isEmpty();
        cout<<d<<endl;
        new1.push(10);
        new1.push(20);
	  new1.push(30);
        cout<<new1.peek()<<endl;

        bool c=new1.isEmpty();
        cout<<c<<endl;
        return 0;
}

                                                                                                                      

                                                                                                                            

                                                                                                                                

