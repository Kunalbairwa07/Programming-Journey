#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    for (int x=1; x<=10; x++){
        cout<<n<<"*"<<x<<"="<<n*x<<endl;
    }
    return 0;
}