#include <iostream>
#include "fprj/mod1/stack.h"
#include "fprj/mod2/sum.h"

int main(int argc, char** argv) {
    std::cout << "# main" << std::endl;

    fprj::mod1::Stack<int> stack;
    for (int i = 1; i <= 10; i++) {
        stack.push(i);
    }
    std::cout << "sum[1-10] => " << fprj::mod2::sum(stack) << std::endl;
    return 0;
}
