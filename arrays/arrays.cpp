#include "array.h"

Array::Array(int size){
            this->size = size;
            data = new int[size];

            for(int i=0; i <size; i++){ data[i] = 0; }
        } 

void Array::insert(int value){
          static int count = 0;
           if(size != count && data[count]==0){
              data[count] = value;
              count += 1;
              return;
           }

            std::cout<< "Max size reached no more space " <<std::endl;
        }

void Array::remove(int value){

}

int& Array::operator[](int v){

    return data[v];
}

 int Array::len() const{
    return size;
}

Array::~Array(){
    delete[] data;

    std::cout <<std::endl << "memory freed " << std::endl;
}