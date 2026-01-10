// To take Input and give output in Array.
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {7, 5, 9, 4, 1, 2, 5, 7, 4, 1};
    int n = sizeof(arr) / sizeof(int); // this will give the length of the array.

    // for (int i = 0; i < n; i++)
    // {                                 (for taking input)
    //     cin >> arr[i];
    // }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}