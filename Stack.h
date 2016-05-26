//
// Created by gri on 26.05.16.
//

#ifndef TO_GIT_STACK_H
#define TO_GIT_STACK_H

#include <iostream>

class Stack {
private:
    int *elem;
    int size;
    int capacity;
public:
    Stack()
    {
        std::cout << "Constr \n";
        elem = new int[8];
        size = 0;
        capacity = 8;
    }
    Stack(int n)
    {
        std::cout << "Constr \n";
        elem = new int[n];
        size = 0;
        capacity = n;
    }
    ~Stack()
    {
        std::cout << "Destruct" << std::endl;

        delete[] elem;
    }
    Stack(const Stack &stack)
    {
        std::cout << "Copy constr" << std::endl;
        this->size = stack.size;
        this->capacity = stack.capacity;
        elem = new int[capacity];
        for (int i = 0; i < size; ++i) {
            elem[i] = stack.elem[i];
        }
    }

    Stack& operator = (const Stack &stack)
    {
        delete[] elem;
        size = stack.size;
        capacity = stack.capacity;
        elem = new int[capacity];
        std::cout << "Copy \n";
        for (int i = 0; i < size; ++i) {
            elem[i] = stack.elem[i];
        }
        return *this;

    }
    Stack& operator = (Stack &&stack){
        std::cout << "Move \n";

        delete[] elem;

        elem = stack.elem;
        stack.elem = nullptr;

        capacity = stack.capacity;
        size = stack.size;

        return *this;
    }

    void push(int elem) {
        this->elem[size] = elem;
        size++;
    }


};


#endif //TO_GIT_STACK_H
