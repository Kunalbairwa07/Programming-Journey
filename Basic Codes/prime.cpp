//This program is to check the number prime or not.
#include<iostream>
using namespace std;
int main(){
    int n, x=2;
    bool isPrime = true;
    cout<<"This program checks the number is Prime or Not..."<<endl;
    cout<<"Enter the number =";
    cin>> n ;
    while(x<=n-1){
        if(n%x==0){
            isPrime = false;
            break;
            x++;
        }
        if(isPrime){
            cout<<"This is a Prime Number";
        }else{
            cout<<"This is NOT a prime Number";
        }
    }
    return 0;
}