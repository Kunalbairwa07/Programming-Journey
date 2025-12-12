#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number = " << endl;
    cin >> num;
    if (num < 0)
    {
        cout << "The number is negative." << endl;
    }
    else if (num > 0)
    {
        cout << "The number is Positive." << endl;
    }
    else
    {
        cout << "The number is 0.";
    }
    return 0;
}