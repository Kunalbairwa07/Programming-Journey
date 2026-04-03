#include<iostream>
using namespace std;
int main(){
    int opt;
    int num1, num2;
    cout<<"Enter the value of number 1 = "<<endl;
    cin>>num1;
    cout<<"Enter the value of number 2 = "<<endl;
    cin>>num2;
    cout<<"press any key "<<endl;
    cout<<"1. for addition "<<endl;
    cout<<"2. for substraction "<<endl;
    cout<<"3. for multiplication "<<endl;
    cout<<"4. for division "<<endl;

    cin>>opt;
    switch(opt){
        case 1: cout<<"The addition of two number is = "<<num1+num2<<endl;
        break;
        case 2: cout<<"The substraction of two number is = "<<num1-num2<<endl;
        break;
        case 3: cout<<"The multiplication of two number is = "<<num1*num2<<endl;
        break;
        case 4: cout<<"The division of two number is = "<<num1/num2<<endl;
        break;
        default : cout<<"Invalid Input";
    }
    cout<<"Thanking you for using me. "<<endl;
    return 0;
}