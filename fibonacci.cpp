#include <iostream>
using namespace std;

// Fibonacci using recursion

int rec_fibonacci(int n)
{
    if (n > 0 && n <= 2)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }

    else
    {
        return rec_fibonacci(n - 1) + rec_fibonacci(n - 2);
    }
}

// Fibonacci using loop method

int fibonacci(int n)
{
    int current, previous = 0, prev_prev = 0;
    if (n == 0)
    {
        current = 0;
    }
    else
    {
        current = 1;
    }

    for (int i = 0; i < n - 1; i++)
    {
        prev_prev = previous;
        previous = current;
        current = prev_prev + previous;
    }
    return current;
}
int main()
{
    int num;
    cout << "Please enter a number : ";
    cin >> num;
    cout <<"Fibonacci number of "<<num<<" is " <<fibonacci(num);
    return 0;
}