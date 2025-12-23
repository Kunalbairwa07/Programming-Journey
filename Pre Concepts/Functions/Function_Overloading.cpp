// Function Overloading :-
// Multiple Function with same name but different Parameters.
// Difference - Type / No. of parameters.

#include <iostream>
using namespace std;

int sum(int a, int b) // once
{
    int sum = a + b;
    cout << " " << sum << endl;
    return sum;
}

double sum(double a, double b) //with different type (double)
{
    int sum = a + b;
    cout << " " << sum << endl;
    return sum;
}

int sum(int a, int b, int c) // with different no. of parameters (a b c)
{
    int sum = a + b + c;
    cout << " " << sum << endl;
    return sum;
}

int main()
{ // Function oveloading
    sum(2, 3);
    sum(2.5, 3.5);
    sum(1, 2, 3);
    return 0;
}