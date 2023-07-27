#include<iostream>

// Function declarations
int mathOperation(int a, int b, char operation);
double mathOperation(double a, double b, char operation);

// Function definitions
int mathOperation(int a, int b, char operation) 
{
    switch (operation) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        default:
            std::cout << "Invalid operation for integers!" << std::endl;
            return 0;
    }
}

double mathOperation(double a, double b, char operation) 
{
    switch (operation) 
	{
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0)
			{
                return a / b;
            } else {
                std::cout << "Division by zero not allowed!" << std::endl;
                return 0.0;
            }
        default:
            std::cout << "Invalid operation for doubles!" << std::endl;
            return 0.0;
    }
}

int main() 
{
    int num1, num2, resultInt;
    double num3, num4, resultDouble;
    char operation;

    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    std::cout << "Enter the operation (+ or -): ";
    std::cin >> operation;

    resultInt = mathOperation(num1, num2, operation);
    std::cout << "Result (Integer): " << resultInt << std::endl;

    std::cout << "Enter two doubles: ";
    std::cin >> num3 >> num4;
    std::cout << "Enter the operation (+, -, *, or /): ";
    std::cin >> operation;

    resultDouble = mathOperation(num3, num4, operation);
    std::cout << "Result (Double): " << resultDouble << std::endl;

    return 0;
}
