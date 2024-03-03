#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Enter three integer values: ";
    std::cin >> a >> b >> c;

    // Allocate memory for integer pointers
    int *ptrA = new int;
    int *ptrB = new int;
    int *ptrC = new int;

    *ptrA = a;
    *ptrB = b;
    *ptrC = c;

    std::cout << "Contents of variables:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    std::cout << "Contents of pointers:" << std::endl;
    std::cout << "ptrA: " << *ptrA << std::endl;
    std::cout << "ptrB: " << *ptrB << std::endl;
    std::cout << "ptrC: " << *ptrC << std::endl;

    delete ptrA;
    delete ptrB;
    delete ptrC;

    return 0;
}
