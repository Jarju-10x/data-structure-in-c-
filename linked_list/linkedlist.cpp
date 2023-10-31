#include "linkedlist.hpp"
#include <iostream>

using std::cout;

Linked_list::Linked_list(): head(nullptr){}

void Linked_list::push(int val){
    Node* newNode = new Node(val);

    if(!head){
        head = newNode;
    }else{
        Node* curr = head;

        while(curr->next){ curr = curr->next;}

        curr->next = newNode;
    }
}

void Linked_list::display(){
    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << " --> ";
        temp = temp->next;
    }
        cout << " NULL\n";
}

Linked_list::~Linked_list(){
    while(head){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
     cout << " memory freed";
}