#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter = ";
    cin >> n;
    // Upper half
    for (int i = 1; i <= n; i++)
    { // Rows
        for (int j = 1; j <= i; j++)
        { // Stars
            cout << "*";
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        { // Spaces
            cout << " ";
        }
        for (int l = 1; l <= i; l++)
        { // Stars
            cout << "*";
        }
        cout << endl;
    }
    // Lower Half
    for (int i = n; i >= 1; i--)
    { // Rows
        for (int j = 1; j <= i; j++)
        { // Stars
            cout << "*";
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        { // Spaces
            cout << " ";
        }
        for (int l = 1; l <= i; l++)
        { // Stars
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
/*
Approach - Break the Problem into Sub Problem.
*/