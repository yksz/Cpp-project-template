#include "fprj/mod2/sum.h"
#include <gtest/gtest.h>

using namespace fprj::mod2;

TEST(sum, Stack) {
    // when:
    fprj::mod1::Stack<int> s;
    for (int i = 1; i <= 10; i++) {
        s.push(i);
    }

    // then:
    EXPECT_EQ(55, sum(s));
}
