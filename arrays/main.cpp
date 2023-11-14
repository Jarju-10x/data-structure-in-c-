#include <iostream>
#include "array.h"

int main(){
   Array arr(5);
   for(int i = 1; i <= arr.len(); i++) arr.insert(i);
   
   for(int i = 0; i < arr.len(); i++) 
   std::cout << arr[i] <<" ";
}