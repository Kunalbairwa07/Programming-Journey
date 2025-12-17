#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter = ";
    cin>>n;
    char ch = 'A';
    for(int i=1; i<=n; i++){
        int val = i;
        for(int j=1; j<=i; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
/*
The Pattern Is look Like.
A
BC
DEF
GHIJ
KLMNO
*/