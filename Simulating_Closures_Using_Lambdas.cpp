#include <iostream>
#include <functional>
using namespace std;

std::function<void()> outerFunction() {
    string message = "Hello from outer scope.cpp";
    return [message]() {
        cout << message << endl;
    };
}

int main() {
    auto myClosure = outerFunction();
    myClosure();
    return 0;
}
