#include <iostream>
#include "linkedlist.hpp"

int main(){
    Linked_list l1;

    for(int i = 1; i<=10; i++)
    l1.push(i*2);

    l1.display();
}