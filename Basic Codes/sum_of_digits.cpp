// Difficult question 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the digits = ";
    cin>>n;
    int digiSum =0;
    while(n>0){
        int lastdig = n % 10;
        digiSum += lastdig;
        n = n/10;
    }
    cout<<"Sum = "<<digiSum<<endl;
    return 0;
}

/*FOR LOOP  VERSION
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Give me the input value = ";
    cin>>n;
    int digisum=0;
    for(int i=n; i>0; i=i/10){
        int lastdig = i%10;
        digisum += lastdig;
    }
    cout<<"The sum is = "<<digisum<<endl;
    return 0;
}
    */