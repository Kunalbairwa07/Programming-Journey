// (*)is a Dereference operator.
// Gets the value of the variable pointed by any pointer.

#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    cout << "The address ov variable a = " << &a << endl;
    cout << "The value of the variable a = " << *(&a); // Derefernce variable.
    return 0;
}
/*
Another Way to do this.
#include <iostream>
    using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;

    cout << ptr << "\n";
    cout << *ptr;
    *ptr = 20;
    cout << a << "\n";
    return 0;
}
*/