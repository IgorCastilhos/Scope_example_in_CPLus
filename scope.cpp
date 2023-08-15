//
// Created by igorc on 8/15/2023.
//
#include <iostream>

int globalVar; // This is a global variable

void localExample() {
    int localVar; // This is a local variable
    localVar = 5;
    std::cout << "Local variable: " << localVar << std::endl;
}

namespace MyNamespace {
    int namespaceVar = 42;
}

class MyClass {
public:
    static int staticMember;
    int nonStaticMember;

    MyClass(int value) : nonStaticMember(value) {}
};

int MyClass::staticMember = 7;

int main() {
    // Global Scope
    std::cout << "Global variable: " << globalVar << std::endl;

    // Local Scope
    localExample();

    // Namespace Scope
    std::cout << "Namespace variable: " << MyNamespace::namespaceVar << std::endl;

    // Class Scope
    MyClass obj(10);
    std::cout << "Static member: " << MyClass::staticMember << std::endl;
    std::cout << "Non-static member: " << obj.nonStaticMember << std::endl;
}