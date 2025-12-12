// ACHIVEMETS
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number = ";
    cin>>n;
    int sum=0;
    int zero=0;
    while(n>0){
        int lastdig = n%10;
        if(n%2!=0){
          sum=sum+lastdig;  
        }
        else{
            n*zero;
        }
        n=n/10;
    }
    cout<<"the sum of odd number is = "<<sum;
    return 0;
}