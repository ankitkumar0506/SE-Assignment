#include<iostream>
using namespace std;

class Calculator 
{
public:
    int add(int x, int y) 
	{
        return x + y;
    }

    int subtract(int x, int y) 
	{
        return x - y;
    }

    int multiply(int x, int y) 
	{
        return x * y;
    }

    double divide(double x, double y) 
	{
        if (y == 0) 
		{
            throw "Cannot divide by zero!";
        }
        return x / y;
    }
};

int main() 
{
    Calculator calculator;

    cout << "Select operation..." << endl;
    cout << "1. Add..." << endl;
    cout << "2. Subtract..." << endl;
    cout << "3. Multiply..." << endl;
    cout << "4. Divide..." << endl;

    int choice;
    cout << "Enter choice (1/2/3/4)... ";
    cin >> choice;

    int num1, num2;
    cout << "Enter first number... ";
    cin >> num1;
    cout << "Enter second number... ";
    cin >> num2;

    int result;

    switch (choice) 
	{
    case 1:
        result = calculator.add(num1, num2);
        break;
    case 2:
        result = calculator.subtract(num1, num2);
        break;
    case 3:
        result = calculator.multiply(num1, num2);
        break;
    case 4:
        try 
		{
            result = calculator.divide(num1, num2);
        }
        catch (const char* error) 
		{
            cerr << "Error: " << error << endl;
        
        }
        break;
    default:
        cerr << "Invalid input..." << endl;
        return 1;
    }

    cout << "...RESULT... " << result << endl;


}
