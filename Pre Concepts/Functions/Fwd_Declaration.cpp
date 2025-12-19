/*
Declaration = the function's name, return type, and parameters (if any)
Definition = the body dunction

void sayHello(){ // Declaration
cout<<"Hello"; //Definition
}

When we use any function we have to declare that function before the main functon the after we can use whenever we want.

*/
#include <iostream>
using namespace std;

void SayHello(); // Declaration

int main()
{
    SayHello();
    return 0;
}

void SayHello()
{
    cout << "Hello user :) ";
}