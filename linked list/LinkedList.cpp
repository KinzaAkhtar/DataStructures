#include <iostream>
#include "LinkedList.h"

using namespace std;

linked_list::linked_list()
{
    size = 0;
    newnode = NULL;
    head = NULL;
}

linked_list::linked_list(int n)
{
    size = 0;
    head = NULL;
    while (n)
    {
        create_node();
        n--;
    }
}

void linked_list::create_node(int data)
{
    if (currentnode == NULL)
    {
        push_back(data);
    }
    else
    {
        size++;
        newnode = new node();
        newnode->data = data;
        newnode->link = NULL;
        if (head == NULL)
        {
            head = newnode;
            currentnode = newnode;
        }
        else
        {
            currentnode->link = newnode;
            currentnode = newnode;
        }
    }
}

void linked_list::create_node()
{
    if (currentnode == NULL)
    {
        push_back();
    }
    else
    {
        size++;
        newnode = new node();
        cin >> newnode->data;
        newnode->link = NULL;
        if (head == NULL)
        {
            head = newnode;
            currentnode = newnode;
        }
        else
        {
            currentnode->link = newnode;
            currentnode = newnode;
        }
    }
}

void linked_list::add_node(int position)
{
    if (position > 0 && position <= size + 1)
    {
        size++;
        newnode = new node();
        cin >> newnode->data;
        currentnode = head;
        int i = 1;
        while (i < position - 1)
        {
            currentnode = currentnode->link;
            i++;
        }
        if (position != 1)
        {
            newnode->link = currentnode->link;
            currentnode->link = newnode;
        }
        else
        {
            newnode->link = head;
            head = newnode;
        }
    }
    else
    {
        cout << "Invalid position" << endl;
    }
    currentnode = NULL;
}

void linked_list::add_node(int position, int data)
{
    if (position > 0 && position <= size + 1)
    {
        size++;
        newnode = new node();
        newnode->data = data;
        currentnode = head;
        int i = 1;
        while (i < position - 1)
        {
            currentnode = currentnode->link;
            i++;
        }
        if (position != 1)
        {
            newnode->link = currentnode->link;
            currentnode->link = newnode;
        }
        else
        {
            newnode->link = head;
            head = newnode;
        }
    }
    else
    {
        cout << "Invalid position" << endl;
    }
    currentnode = NULL;
}

void linked_list::push_back(int data)
{
    newnode = new node();
    newnode->link = NULL;
    newnode->data = data;
    currentnode = head;
    int n = size - 1;
    while (n)
    {
        currentnode = currentnode->link;
        n--;
    }
    currentnode->link = newnode;
    size++;
    currentnode = NULL;
}

void linked_list::push_back()
{
    newnode = new node();
    newnode->link = NULL;
    cin >> newnode->data;
    currentnode = head;
    int n = size - 1;
    while (n)
    {
        currentnode = currentnode->link;
        n--;
    }
    currentnode->link = newnode;
    size++;
    currentnode = NULL;
}

void linked_list::push_up(int data)
{
    newnode = new node();
    newnode->link = head;
    newnode->data = data;
    head = newnode;
    size++;
    currentnode = NULL;
}

void linked_list::push_up()
{
    newnode = new node();
    newnode->link = head;
    cin >> newnode->data;
    head = newnode;
    size++;
    currentnode = NULL;
}

void linked_list::print()
{
    if (head != NULL)
    {
        currentnode = head;
        while (currentnode != NULL)
        {
            cout << currentnode->data << '\t';
            currentnode = currentnode->link;
        }
        cout << endl;
    }
    else
    {
        cout << "No element found" << endl;
    }
}

int linked_list::get_size()
{
    return size;
}

void linked_list::update(int position)
{
    if (position > 0 && position <= size)
    {
        currentnode = head;
        while (position - 1)
        {
            currentnode = currentnode->link;
            position--;
        }
        cin >> currentnode->data;
    }
    else
    {
        cout << "Invalid position" << endl;
    }
    currentnode = NULL;
}

void linked_list::update(int position, int data)
{
    if (position > 0 && position <= size)
    {
        currentnode = head;
        while (position - 1)
        {
            currentnode = currentnode->link;
            position--;
        }
        currentnode->data = data;
    }
    else
    {
        cout << "Invalid position" << endl;
    }
    currentnode = NULL;
}
void linked_list::deletenode(int position)
{
    if (position > 0 && position <= size)
    {
        node *previousnode;
        currentnode = head;
        int tempposition=position;
        while (position - 1)
        {
            previousnode = currentnode;
            currentnode = currentnode->link;
            position--;
        }
        size--;
        if (tempposition!=1){
            previousnode->link = currentnode->link;
        }
        else{
            head=currentnode->link;
        }
            delete currentnode;
            currentnode=NULL;
    }
    else
    {
        cout << "Invalid position" << endl;
    }
}

void linked_list::delete_from_begining()
{
    if (head != NULL)
    {
        currentnode = head;
        head = head->link;
        delete currentnode;
        currentnode=NULL;
        size--;
    }
    else
    {
        cout << "List is empty" << endl;
    }
    
}

void linked_list::delete_from_end()
{
    if (head != NULL)
    {
        node *previousnode;
        currentnode = head;
        int tempsize = size;
        while (tempsize - 1)
        {
            previousnode = currentnode;
            currentnode = currentnode->link;
            tempsize--;
        }
        size--;
        if(!size-1)
        {
            previousnode->link = currentnode->link;
        }
        else{
            head=NULL;
        }
        delete currentnode;
        currentnode=NULL;
    }
    else
    {
        cout << "List is empty" << endl;
    }
    
}
linked_list::~linked_list(){
   currentnode=head;
   node* nextnode;
   head=NULL;
   for(int i=0;i<size;i++){
        nextnode=currentnode->link;
        delete currentnode;
        currentnode=nextnode;
   }

}