#include <iostream>
#include "static_stack.cpp"

using namespace std;
int main(){
    static_stack mystack;
    // cout<<mystack;
    // cout<<"Is stack empty? "<<mystack.is_empty()<<endl;
    cout<<"The capacity of the stack is "<<mystack.capacity()<<endl;
    mystack.push(1);
    mystack.push(5);
    mystack.push(8);
    mystack.push(9);
    cout<<mystack;
    cout<<"size of stack is "<<mystack.size()<<endl;
    cout<<"Remaining capacity is "<<mystack.available_capacity()<<endl;
    // cout<<"Is stack empty? "<<mystack.is_empty()<<endl;
    // cout<<"Is stack full? "<<mystack.is_full()<<endl;
    mystack.pop();
    mystack.push(6);
    mystack.push(4);
    mystack.push(3);
    mystack.push(8);
    mystack.push(4);
    mystack.push(9);
    cout<<mystack;
    cout<<"size of stack is "<<mystack.size()<<endl;
    cout<<"Remaining capacity is "<<mystack.available_capacity()<<endl;
    // cout<<"Is stack full? "<<mystack.is_full()<<endl;
    // cout<<"Is stack empty? "<<mystack.is_empty()<<endl;
    // cout<<"Enter an element";
    // mystack.push();
    // cout<<mystack;
    // cout<<"Is stack full? "<<mystack.is_full()<<endl;
    // mystack.push();
    // mystack.pop();
    // cout<<mystack;
    // cout<<"Is stack full? "<<mystack.is_full()<<endl;
    // cout<<"Now try to enter an element";
    // mystack.push();
    // cout<<mystack;
}