#include "mprj/mod2/sum.h"
#include "mprj/mod2/internal/add.h"

namespace mprj {
namespace mod2 {

int sum(mprj::mod1::Stack<int> s) {
    int sum = 0;
    while (!s.empty()) {
        sum = add(sum, s.top());
        s.pop();
    }
    return sum;
}

} // namespace mod2
} // namespace mprj
