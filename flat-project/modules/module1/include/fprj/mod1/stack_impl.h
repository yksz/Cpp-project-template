#include "fprj/mod1/stack.h"

namespace fprj {
namespace mod1 {

template<typename T>
Stack<T>::Stack() {}

template<typename T>
Stack<T>::~Stack() {}

template<typename T>
bool Stack<T>::empty() {
    return m_stack.empty();
}

template<typename T>
size_t Stack<T>::size() {
    return m_stack.size();
}

template<typename T>
T& Stack<T>::top() {
    return m_stack.top();
}

template<typename T>
void Stack<T>::push(const T& val) {
    return m_stack.push(val);
}

template<typename T>
void Stack<T>::pop() {
    m_stack.pop();
}

} // namespace mod1
} // namespace fprj
