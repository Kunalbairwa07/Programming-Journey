#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter the marks of sub1 = " << endl;
    cin >> marks;
    if (marks >= 90)
    {
        cout << "grade is A";
    }
    else if (marks >= 80)
    {
        cout << "grade is B";
    }
    else
    {
        cout << "grade is C";
    }
    return 0;
}