#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
{
    int st = 0, end = n - 1;
    for (int i = 0; st <= end; i++) // it works better with while loop => while(st<=end){condition}
    {
        int mid = (st + end) / 2;
        if (arr[mid] == key)
        {
            cout << "The key is found at index = ";
            return mid;
        }
        else if (arr[mid] < key)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Key is not found ";
    return 0;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    cout << BinarySearch(arr, n, 6) << endl;
    return 0;
}