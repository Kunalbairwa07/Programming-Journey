#include <iostream>
using namespace std;
int main(){
    float num1;
    float num2;
    cout<<"enter the first number ="<<endl;
    cin>>num1;
    cout<<"enter the second number ="<<endl;
    cin>>num2;
    if(num1>num2){
        cout<<"This number is greatest = " << num1 <<endl;
    }
    else{
        cout<<"this number is greatest = " << num2 <<endl;
    }
    return 0;
}