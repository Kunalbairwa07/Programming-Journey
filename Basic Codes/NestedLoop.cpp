#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter = ";
    cin>>num;
    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
REMEBER THE POINTS
1. Outer Loop = No. of Rows
2. Inner Loop = No. of Column / Each Row
3. Work in inner loop (Each row) - Code
*/