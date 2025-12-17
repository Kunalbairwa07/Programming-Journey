#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"*";
        for(int j=1; j<=n-1; j++){
            if(i==1 || i==n){
                cout<<"*"; // for star filling 
            }
            else{
                cout<<" "; // For White spaces
            }
        }
        cout<<"*"<<endl;
    }
    return 0;
}
/*

The Pattern Looks Like.
*******
*     *
*     *
*     *
*     *
*******

*/