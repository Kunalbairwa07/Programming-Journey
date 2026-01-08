#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {4, 5, 2, 1, 3, 6, 7};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            cout << "Assigning value " << arr[i] << " to max \n";
        }
    }
    cout << "Max = " << max << endl;
    return 0;
}