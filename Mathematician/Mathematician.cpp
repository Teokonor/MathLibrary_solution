#include "Arithmetic.h"
#include "Trigonometry.h"
#include <iostream>

int main()
{
    std::cout << "Please, enter two integers.\n";
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << "Sum: " << sum(num1, num2) << "\nDifference: " << difference(num1, num2) 
        << "\nMultiplexing: " << multiplex(num1, num2) << "\nGrade: " << grade(num1, num2);

    // From First_branch
    std::cout << "\nsin: " << sinus(num1) << " " << sinus(num2);
}