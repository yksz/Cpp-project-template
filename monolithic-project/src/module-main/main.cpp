#include <iostream>
#include "mprj/mod1/stack.h"
#include "mprj/mod2/sum.h"

int main(int argc, char** argv) {
    std::cout << "# main" << std::endl;

    mprj::mod1::Stack<int> stack;
    for (int i = 1; i <= 10; i++) {
        stack.push(i);
    }
    std::cout << "sum[1-10] => " << mprj::mod2::sum(stack) << std::endl;
    return 0;
}
