#include <iostream>

using namespace std;

// Factorail usin loop method

int factorial(int n)
{
    int fact = 1;
    if (n < 0)
    {
        return 0;
    }
    else if (n > 0 && n <= 1)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        return fact;
    }
}

// Factorial using recursion method

int rec_factorail(int n)
{
    if (n < 1)
    {
        return 1;
    }
    else
    {
        return n * rec_factorail(n - 1);
    }
}

int main()
{
    int num, choose;
    cout << "Please enter a number : ";
    cin >> num;

    if (factorial(num))
    {
        cout << "Factorial of " << num << " is " << factorial(num);
    }
    else
    {
        cout << "We can not find factorial of negative numbers";
    }

    // cout<<"Factorial of "<<num<<" is "<<rec_factorail(num);
    return 0;
}