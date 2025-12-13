//Achievment 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter =";
    cin>>n;
    for(int i=1; i<=n; i++){
        int val=i;
        for(int j=0; j<val;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}