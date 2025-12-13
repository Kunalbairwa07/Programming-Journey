#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter = ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){ //this is for white space
            cout<<" ";
        }
        for(int k=1; k<=i; k++){ // this is for printing star
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
/*
It has double inner loop 
pattern is like:-
    *
   **
  ***
 ****
*****          
*/