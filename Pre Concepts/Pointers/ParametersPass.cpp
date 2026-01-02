/*
Passing Arguments

Pass by Value :- When parameter is a copy of actual argument variable in memory.

pass by Reference :- when we pass the reference of argument to the function. (address.)

*/

#include <iostream>
using namespace std;

// int changesA(int)
// {
//     int param = 20;          // pass by value method.
//     cout << param << endl;
// }

int changesA(int *ptr)
{
    *ptr = 20;
    cout << *ptr << endl; // pass by reference (address)
}
int main()
{
    int a = 10;
    int *ptr = &a;
    changesA(ptr);
    cout << a << endl;
    return 0;
}