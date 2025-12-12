#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter = ";
    cin>>n; //753
    int res = 0;
    while(n>0){
        int lastdig = n%10;
        res = res*10+lastdig; //700+50+3
        n=n/10;
    }
    cout<<"The number is = "<<res<<endl;
    return 0;
}