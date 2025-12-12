#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enetr = ";
    cin>>n;
    while (n>0){
        int lastdig = n%10;
        cout<<" "<<lastdig;
        n=n/10;
    }
    
    return 0;
}
/* FOR LOOP VERSION
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter = ";
    cin>>n;
    for(int i=n; i>0; i=i/10){
        int lastdig = i%10;
        cout<<""<<lastdig;
    }
    return 0;
}*/