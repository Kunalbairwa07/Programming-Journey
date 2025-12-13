#include <iostream>
using namespace std;
int main(){
    int n;
    int num = 1; // pehle hi define kro
    cout<<"Enter = ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<" "<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
jab bhi kbhi number ya char continuous ho usko upr hi defined krdo.
*/