#include <iostream>
#include <stack>

int main() {
    std::stack<int> st;
    std::stack<int> s1;
    std::stack<int> s2;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    int topElement = st.top(); // Capture the top element
    st.pop(); // Remove the top element

    std::cout << "Top element: " << topElement << std::endl;
    std::cout << "Stack size: " << st.size() << std::endl;
    std::cout << "Empty  : " << st.empty() << std::endl;

    s1.swap(s2);

    return 0;
}
