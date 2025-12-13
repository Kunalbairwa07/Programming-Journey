#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter =";
    cin>>n;
    for(int i=n; i>=1; i--){
        int val=i;
        for(int j=1; j<=val; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}