#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    cout << "The location of variable a = " << &a << endl;
    cout<<ptr;
    return 0;
}
/*
Pointers = A special variable that stores address of another variable.
*/