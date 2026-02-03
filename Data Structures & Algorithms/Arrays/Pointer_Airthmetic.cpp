#include <iostream>
using namespace std;
int main()
{
    int a = 10; // Inializing the Int variable
    int *aptr = &a; // make a pointer variable
    cout << aptr << "\n";
    aptr++; //increment the pointer variable, (int carry 4 bytes)
    cout << aptr << "\n";
    return 0;
}

/*
For Char (1 byte)
#include <iostream>
using namespace std;

int main() {
    char ch = 'k';
    char *ptr = &ch;

    cout << (void*)ptr << endl;
    ptr++;
    cout << (void*)ptr << endl;

    return 0;
}
    also we can do with decrement operator.
*/