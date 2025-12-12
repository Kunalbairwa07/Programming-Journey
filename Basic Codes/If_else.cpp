#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age = ";
    cin >> age;
    if (age >= 18)
    {
        cout << "you are eligible to vote" << endl;
    }
    if (age >= 35) // we can use multiple if statement.
    {
        cout << "Contest for election";
    }
    else
    {
        cout << "you are not eligible to vote";
    }
    return 0;
}