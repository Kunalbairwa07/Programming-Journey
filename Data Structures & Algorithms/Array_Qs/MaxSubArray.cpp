#include <iostream>
using namespace std;

void MaxSubArray(int *arr, int n)
{
    for (int start = 0; start < n; start++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
            }
        }
    }
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    MaxSubArray(arr, n);
    return 0;
}