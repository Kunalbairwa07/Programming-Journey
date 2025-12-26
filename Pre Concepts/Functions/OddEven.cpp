//This Program is to check number is Even or Odd.
#include <iostream>
using namespace std;

bool oddEven(int n)
{
    if (n % 2 == 0)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cout << "Enter Your Number = ";
    cin >> n;
    bool result = oddEven(n);
    if (result == true) // = & == both change the entire output.
    {
        cout << "The number is even";
    }
    else
    {
        cout << "The number is odd";
    }
    return 0;
}

//other alternate of if else (n % 2 == 0) ? "even" : "odd";