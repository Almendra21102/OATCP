#include <iostream>
#include <stack>
#include <string>

int main() {
    std::string number;
    int k;
    std::cout << "Enter the num: ";
    std::cin >> number;
    std::cout << "Enter the value of k: ";
    std::cin >> k;
    
    // Corner case
    if (number.size() == k) {
        std::cout << "0\n";
        return 0;
    }
    
    std::stack<char> stack;
    stack.push(number[0]);
    
    for (int i = 1; i < number.length(); i++) {
        for (; !stack.empty() && stack.top() > number[i] && k != 0; k--) {
            stack.pop();
        }
        stack.push(number[i]);
    }
    
    std::stack<char> resultStack;
    while (!stack.empty()) {
        for (; k != 0; k--) {
            stack.pop();
        }
        resultStack.push(stack.top());
        stack.pop();
    }
    
    while (!resultStack.empty() && resultStack.top() == '0') {
        resultStack.pop();
    }
    
    std::string result = "";
    while (!resultStack.empty()) {
        result.push_back(resultStack.top());
        resultStack.pop();
    }
    
    std::cout << result << "\n";
    return 0;
}
