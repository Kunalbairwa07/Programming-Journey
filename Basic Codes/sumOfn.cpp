#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number = ";
    cin >> n;

    int sum = 0; // Iniatialization is compulsory otherwise it incremenet from garbage value.
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << " The sum is = " << sum << endl;
    return 0;
}