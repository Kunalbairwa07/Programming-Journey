// Achievement (Run without any error and perfect logic)
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter = ";
    cin>>n;
    for(int i=1; i<=n; i++){
        int val=i;
        for(int j=1; j<=val; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}