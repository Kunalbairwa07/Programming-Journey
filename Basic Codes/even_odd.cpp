#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number = " <<endl;
    cin>>num;
    if(num%2==0){ // num%2==0 [Checks the number is even reminder 0]
        cout<<"Number is even : "<< num <<endl;
    }
    else {
        cout<<"number is odd : "<< num <<endl;
    }
    return 0;
}