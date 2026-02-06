#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int *ptr = &num;
    cout << ptr << endl;
    cout << ptr + 5; // this will increment the pointer address with 2.
    return 0;
}