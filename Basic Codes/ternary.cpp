#include <iostream>
using namespace std;
int main()
{
    bool isAdult; // 1,0
    int age;
    cout << "enter age = " << endl;
    cin >> age;
    /*if (age >= 18)
    {
        isAdult = true;
    }
    else                          // longer way without the use of ternary operator
    {
        isAdult = false;
    }*/
    
    isAdult = age >=18 ? true:false;
    return 0;
}