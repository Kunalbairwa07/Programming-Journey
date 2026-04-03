//Most Important Question1
#include<iostream>
using namespace std;
int main(){
    int n;
    int cubeSum = 0;
    cout<<"enter the number =";
    cin>>n;
    int num=n;// Remenber this one......code works in chronological manner.
    while(num>0){
        int lastdig = num%10;
        cubeSum = cubeSum + lastdig*lastdig*lastdig; // also we can write cubeSum+= lasdig*lastdig*lastdig;
        num/=10; // shrtct methode othrwise (num=num/10;)
    }
    if(cubeSum==n){
        cout<<"This is a Armstrong Number"<<endl;
    }
    else{
        cout << "This is Not a Armstrong Number"<<endl;
    }
    return 0;
}