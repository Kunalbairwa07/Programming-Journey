#include <iostream>
using namespace std;

int main()
{
    int inp;
    cout << "Enter the Size for the array = ";
    cin >> inp;
    int arr[100];
    int size = sizeof(arr) / sizeof(int);

    cout << "Enter Elements \n";
    for (int i = 0; i < inp; i++)
    {
        cin >> arr[i];
    }

    cout << "The Reverse array is = ";
    for (int i = inp-1; i >= 0; i--) // This is the most important Logic in this.
    {
        cout << arr[i] << " ";
    }

    return 0;
}