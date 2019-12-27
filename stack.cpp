//
// Created by mjmj on 2019-12-27.
//
#include <iostream>
#include "stack.h"

void Stack::CreateStack(int size){
    this->stack = new Data[size];
    this->size = size;

    return;
}

void Stack::Init(){
    for(int i=0; i<this->size; i++)
        this->stack[i] = 0;
    this->idx = -1;

    return;
}

void Stack::Push(){
    Data data;

    std::cin >> data;
    if(this->idx == size-1){
        std::cout << "Stack is Full!" << this->idx << std::endl;
        return;
    }
    else this->idx++;
    this->stack[this->idx] = data;

    return;
}

Data Stack::Pop(){
    if(Stack::IsEmpty()){
        std::cout << "Stack is Empty!" << std::endl;
        return -1;
    }
    else this->idx--;
    return this->stack[this->idx+1];
}

Data Stack::Peek(){
    return this->stack[this->idx];
}

int Stack::IsEmpty(){
    if(this->idx == -1) return 1;
    else return 0;
}

void Stack::DeleteStack(){
    delete[] this->stack;

    return;
}