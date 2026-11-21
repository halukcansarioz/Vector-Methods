#pragma once
#include<iostream>
#include<string>
using namespace std;
template<class T>
class myVector
{
    public:
        myVector(int); 
          ~myVector(); 
          int size(); 
          void add(T s); 
          T getAt(int index); 
        void getElement(int index);
        void remove(T s); 
        void erase(int index);
        void sort(); 
    private:
        T* arr;
        int numUsed;
        int numAllocated;    
};
