#include <iostream>
using namespace std;

void MaxSubArray(int *arr, int n)
{
    for (int out = 0; out < n; out++)
    {
        for (int i = out; i < n; i++)
        {
            cout << "(";
            for (int j = out; j <= i; j++)
            {
                cout << arr[j] << " ";
            }
            cout << ") ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    MaxSubArray(arr, n);
    return 0;
    