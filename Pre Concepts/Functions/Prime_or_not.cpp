// This program is to checker wheather a number is prime or not using Functions.
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n;
    cout << "Enter number = ";
    cin >> n;

    if (isPrime(n)) {
        cout << "The number " << n << " is Prime." << endl;
    } else {
        cout << "The number " << n << " is not Prime." << endl;
    }

    return 0;
}
/*
if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    Main Logic of the program.
*/
