#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter = ";
    cin>>n;
    //First half Pyramid
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++){ // 2*i-1  //  2*i+1 (odd number)
            cout<<"*";
        }
        cout<<endl;
    }

    // Second half pyramid
    for(int i=n; i>0; i--){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"*";
        }    
        cout<<endl;
    }
    return 0;
}
/*
Solve it by Divide and conquer
solve first half and then seconf half and combine them.
*/