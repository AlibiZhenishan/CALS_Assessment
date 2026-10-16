#include <iostream>
#include <string>

int main() {
    int a, b; //Here, I declare two integers because I will use some mathematical operations on them
    std::string name; //Here, I declare a string variable to store a name of user, and to use it in the future

    std::cout << std::endl;
    std::cout << "Enter your name: ";
    std::cin >> name; //I Used std::cin to get the name of user and store it in the variable "name"
    std::cout << "Welcome " << name << " to C.A.L.S!" << std::endl;
    std::cout << std::endl;

    std::cout << "Enter first number: ";
    std::cin >> a; //Same logic as for name for first number
    std::cout << "Enter second number: ";
    std::cin >> b; //Same logic as for name for second number
    std::cout << std::endl;


    std::cout << "The sum of " << a << " and " << b << " is: " << (a + b) << std::endl;
    std::cout << "The product of " << a << " and " << b << " is: " << (a * b) << std::endl;
    std::cout << "The quotient of " << a << " and " << b << " is: " << (float(a) / float(b)) << std::endl; // I used float(a) and float(b) to convert the integers to floats, so that the division operation will output a float result instead of an integer result
    std::cout << "The remainder of " << a << " and " << b << " is: " << (a % b) << std::endl;
    std::cout << std::endl;

    std::cout << "Goodbye " << name << " , See you again at C.A.L.S!" << std::endl;
    std::cout << std::endl;

    return 0;
}
