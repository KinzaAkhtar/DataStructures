#include<iostream>
#include "Array.h"

using namespace std;

Array::Array():maxsize(10){
    size=0;
}
void Array:: input(int NumberOfElements){
    int oldsize=size;
    size+=NumberOfElements;
    if(size<=maxsize){
    for(int i=oldsize; i<size; i++){
        cout<<"Enter the element for "<< i+1 <<" position:";
        cin>>MyArray[i];
    }}
    else{
        size-=NumberOfElements;
        cout<<"Array doesnot have the capacity to add "<<NumberOfElements<<" more Elements."<<"You can add at most "<<maxsize<<" elements only. Array already contain " <<size<<" elements.";
    }
}
int  Array:: getsize(){
    return size;

}
void Array:: treverse(){
    for(int i=0; i<size; i++){
        cout<<MyArray[i]<<" ";
    }

}
void Array:: insert(int element,int position){
    if(position<1 || position>size+1){
        cout<<"Invalid position"<<endl;
    }
    else{
        if(size<maxsize){
            for(int i=size;i>position-1;i--){
                MyArray[i]=MyArray[i-1];
            }
            MyArray[position-1]=element;
            size++;
        }
        else{
            cout<<"Array overflow error"<<endl;
        }
    }
}
void Array:: pushfront(int element){
        if(size<maxsize){
            for(int i=size;i>1-1;i--){
                MyArray[i]=MyArray[i-1];
            }
            MyArray[0]=element;
            size++;
        }
        else{
            cout<<"Array overflow error"<<endl;
        }
}
void Array:: pushback(int element){

        if(size<maxsize){
            for(int i=size;i>size;i--){
                MyArray[i]=MyArray[i-1];
            }
            MyArray[size]=element;
            size++;
        }
        else{
            cout<<"Array overflow error"<<endl;
        }

}
void Array:: remove(int position){
     if(position<1 || position>size){
        cout<<"Invalid position"<<endl;
    }
    else{
       
            for(int i=position-1;i<size;i++){
                MyArray[i]=MyArray[i+1];
            }
            size--;
        
    } 
}
