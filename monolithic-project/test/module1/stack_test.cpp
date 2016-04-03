#include "mprj/mod1/stack.h"
#include <gtest/gtest.h>

using namespace mprj::mod1;

/**
 * テスト種別: 正常系
 * テストケース: スタックに要素が何も入っていない場合
 * テスト結果: trueを返す
 */
TEST(Stack, empty_HasNothing) {
    // when:
    Stack<int> stack;

    // then:
    EXPECT_TRUE(stack.empty());
}

/**
 * テスト種別: 正常系
 * テストケース: スタックに要素が入っている場合
 * テスト結果: falseを返す
 */
TEST(Stack, empty_HasSomething) {
    // when:
    Stack<int> stack;
    stack.push(1);

    // then:
    EXPECT_FALSE(stack.empty());
}
