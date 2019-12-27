//
// Created by mjmj on 2019-12-27.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H

typedef int Data;

class Stack {
private:
    int size;
    int idx;
    Data *stack;
public:
    void CreateStack(int size);
    void Init();
    void Push();
    Data Pop();
    Data Peek();
    int IsEmpty();
    void DeleteStack();
};


#endif //STACK_STACK_H
