#include<iostream>
using namespace std;
int main(){
    int a = 21;
    int *ptr = &a;
    cout<<ptr<<endl;
    *ptr --;
    cout<<ptr;
    return 0;
}