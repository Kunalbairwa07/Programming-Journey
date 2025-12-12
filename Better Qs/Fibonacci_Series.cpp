#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    int first=0 , second = 1;
    cout<<" "<<first<<" "<<second;
    for(int i=2; i<n; i++){
        int third = first+second;
        cout<<" "<<third;
        first=second;
        second=third;
    }
    return 0;
}