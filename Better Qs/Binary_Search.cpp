//Binary Search Algorithm
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    int st = 0, end = n - 1;
    int key = 4;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == key)
        {
            cout<<"Key found at index = "<<mid<<endl;
            return 0;
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
    cout<<"Key not found";
    return 0;
}