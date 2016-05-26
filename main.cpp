#include <iostream>
#include "Stack.h"
//( 274 276 263 256 259 261 270 204 269 274 ) /10 = 260.6 Copy
//( 187 186 167 177 153 142 157 199 143 186 ) /10 = 169.7 Move
// = 1.53 раза

Stack test() {

    Stack stack(10000);

    for (int i = 0; i < 10000; ++i) {
        stack.push(i);
    }

    return stack;
}

int main() {

    //Example 2.

    Stack stack1(10000);

    unsigned int start = clock();

    stack1 = test();

    unsigned int end = clock();

    std::cout << end - start << "\n";

    return 0;
}