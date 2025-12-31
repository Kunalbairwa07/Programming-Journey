#include <iostream>
using namespace std;
int main()
{
    cout << ((bool)3 + 2) << endl; // operation with any number wit bool results 1 except with 0.
    cout << (23.5 + 2 + 'A');      // bool < char < int < float < double.(Priority)
    return 0;
}