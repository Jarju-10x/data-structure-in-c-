#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

class Node{
    public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr){}
};

class Linked_list{
    private:
        Node* head;
    
    public:
        Linked_list();
        void push(int val);
        void display();

        ~Linked_list();
};
#endif