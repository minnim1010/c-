#include <iostream>
#include "stack.h"

int main() {
    Stack s1;
    int size;

    std::cin >> size;

    s1.CreateStack(size);
    s1.Init();
    s1.Push();
    s1.Push();
    s1.Push();
    s1.Push();
    std::cout << s1.Pop() << std::endl;
    std::cout << s1.Peek() << std::endl;
    std::cout << "!!!" <<std::endl;

    s1.DeleteStack();

    return 0;
}