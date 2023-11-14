#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
class Array{
    
    public:
        Array(int size);   // CTOR to initialise size     

        void insert(int value);  // to add element in array
        void remove(int value);  // to remove element in array
        int&  operator[](int v);      // to locate the element
        int len() const; // size of array
        ~Array();

    private:
            int*     data;
            int      size;
            
};

#endif