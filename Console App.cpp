#include <iostream>
using namespace std;

float add(float firstNumber, float secondNumber)
{
    float sum = firstNumber + secondNumber;
    return sum;
}

float subtract(float firstNumber, float secondNumber)
{
    float subtract = firstNumber - secondNumber;
    return subtract;
}

float multiply(float firstNumber, float secondNumber)
{
    float multiply = firstNumber * secondNumber;
    return multiply;
}

float divide(float firstNumber, float secondNumber)
{
    float divide = firstNumber / secondNumber;
    return divide;
}

int main()
{
    char continueWork = 'y';

    while (continueWork == 'y' || continueWork == 'Y')
    {
        float firstNumber;
        float secondNumber;
        char operation;

        cout << "Write number: " << endl;
        cin >> firstNumber;

        cout << "Write operator: " << endl;
        cin >> operation;

        cout << "Write number: " << endl;
        cin >> secondNumber;

        if (operation == '+')
        {
            cout << "Result: "
                << add(firstNumber, secondNumber)
                << endl;
        }
        else if (operation == '-')
        {
            cout << "Result: "
                << subtract(firstNumber, secondNumber)
                << endl;
        }
        else if (operation == '*')
        {
            cout << "Result: "
                << multiply(firstNumber, secondNumber)
                << endl;
        }
        else if (operation == '/' && secondNumber != 0)
        {
            cout << "Result: "
                << divide(firstNumber, secondNumber)
                << endl;
        }
        else if (operation == '/' && secondNumber == 0)
        {
            cout << "You can't divide by zero!" << endl;
        }
        else
        {
            cout << "Write correct operation!" << endl;
        }

        do
        {
            cout << "Continue? (y/n): ";
            cin >> continueWork;

            if (continueWork != 'y' &&
                continueWork != 'Y' &&
                continueWork != 'n' &&
                continueWork != 'N')
            {
                cout << "Please write y/n" << endl;
            }

        } while (continueWork != 'y' &&
            continueWork != 'Y' &&
            continueWork != 'n' &&
            continueWork != 'N');
    }

    return 0;
}