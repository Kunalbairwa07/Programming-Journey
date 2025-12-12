#include<iostream>
using namespace std;
int main(){
    int n;
    long fact = 1;
    cout<<"enter the number = ";
    cin>>n;
    for(int x=1; x<=n; x++){ //x se initalize hua or vo n se ek kam tk chalgega
        fact = fact * x;  // this means storing the value of fact variable
    }
     cout << "Factorial of " << n << " = " << fact;
    return 0;
}