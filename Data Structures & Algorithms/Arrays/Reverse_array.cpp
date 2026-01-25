// This program is for Reverse of an Array.
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
    for (int i = inp - 1; i >= 0; i--) // This is the most important Logic in this.
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
There is so many method to solve a question (Many approaches)
Reverse of Array can be solve by majorly two method - One is with extra space like copy array method & Another one is to solve by taking two pointer as a start or end & the swap it.
and last but not the least one is to solve by PreBuilt "Swap()" Function.
*/

/*
Two pointer or Variable 
int start = 0, end = size - 1;

while (start < end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
}
    printArr(arr,size)
*/

/*
Using swap() function
int start = 0, end = size - 1;

while (start < end)
{
    swap(arr[start],arr[end])
    start++;
    end--;
}
    printArr(arr,size)
*/