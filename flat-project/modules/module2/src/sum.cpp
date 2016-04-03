#include "fprj/mod2/sum.h"
#include "fprj/mod2/internal/add.h"

namespace fprj {
namespace mod2 {

int sum(fprj::mod1::Stack<int> s) {
    int sum = 0;
    while (!s.empty()) {
        sum = add(sum, s.top());
        s.pop();
    }
    return sum;
}

} // namespace mod2
} // namespace fprj
