#include <iostream>
#include "static_stack.h"
using namespace std;
static_stack::static_stack(){
    maxsize=10;
    top=-1;
}

void static_stack::push(int data){
    if(top==maxsize-1){
        cout<<"overflow\n";
    }
    else{
    top++;
    stack[top]=data;
    }
}

void static_stack::push(){
    if(top==maxsize-1){
        cout<<"overflow\n";
    }
    else{
    top++;
    cin>>stack[top];
    }
}

void static_stack::pop(){
    if(top==-1){
        cout<<"under flow\n";
    }
    else{
        top--;
    }

}

bool static_stack::is_empty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}

bool static_stack::is_full(){
    if(top==maxsize-1){
        return true;
    }
    else{
        return false;
    }
}
int static_stack::capacity(){
    return maxsize;
}

int static_stack::available_capacity(){
        return maxsize-(top+1);
}

int static_stack::size(){
    return top+1;
}

ostream& operator<<(ostream& out,static_stack& mystack){
    if(mystack.top==-1){
        out<<"stack is empty\n";
    }
    else{
    for(int i=0;i<=mystack.top;i++){
        out<<mystack.stack[i]<<"    ";
    }
    out<<endl;
    }
    return out;
}