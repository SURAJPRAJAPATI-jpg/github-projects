#include <iostream>
using namespace std;

/*
    Function: gcdIterative
    Purpose : To compute the GCD (Greatest Common Divisor) of two numbers using iteration.
    Parameters:
        a - first integer
        b - second integer
    Returns:
        GCD of 'a' and 'b'
    Logic:
        Keep replacing (a, b) with (b, a % b) until b becomes 0
*/
int gcdIterative(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; // When b = 0, a is the GCD
}

/*
    Main function: Driver program to test iterative GCD
*/
int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result = gcdIterative(a, b);

    cout << "GCD (without recursion) = " << result << endl;

    return 0;
}

