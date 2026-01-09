//To find out smallest value in Array.
#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {4, 5, 2, 1, 3, 6, 7};
    int n = sizeof(arr) / sizeof(int);
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            cout << "Assigning value " << arr[i] << " to min \n";
        }
    }
    cout << "Min = " << min << endl;
    return 0;
}