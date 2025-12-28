// to print the number betweem 2 to n (Primes).
#include <iostream>
using namespace std;
int n;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void allPrimes(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    cout << "Enter the value = ";
    cin >> n;
    cout << "Prime numbers up to " << n << " are: ";
    allPrimes(n);
    return 0;
}