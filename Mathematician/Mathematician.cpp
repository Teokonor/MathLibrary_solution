#include "Arithmetic.h"
#include <iostream>

int main()
{
    std::cout << "Please, enter two integers.\n";
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << "Sum: " << sum(num1, num2) << "\nDifference: " << difference(num1, num2) 
        << "\nMultiplexing: " << multiplex(num1, num2) << "\nGrade: " << grade(num1, num2);
}