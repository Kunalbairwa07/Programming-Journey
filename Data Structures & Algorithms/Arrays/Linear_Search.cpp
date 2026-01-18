#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int inp;
    cout << "Enter the Element you have to find in array = ";
    cin >> inp;
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int); //For the size of Array.
    int index = LinearSearch(arr, n, inp);

    if (index == -1)
        cout << "Key not found" << endl;
    else
        cout << "The index for Key is = " << index << endl;
    return 0;
}
/*
Time complexity = Relation b/W input size & no. of Operations.
Linear Time Complexity O(n).
It can perform on Both Sorted or Unsorted Array.
*/