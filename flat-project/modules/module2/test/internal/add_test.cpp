#include "fprj/mod2/internal/add.h"
#include <gtest/gtest.h>

using namespace fprj::mod2;

TEST(add, int) {
    EXPECT_EQ( 3, add( 1,  2));
    EXPECT_EQ(-1, add( 1, -2));
    EXPECT_EQ( 1, add(-1,  2));
    EXPECT_EQ(-3, add(-1, -2));
}
