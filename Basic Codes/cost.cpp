#include<iostream>
using namespace std;
int main(){
    float pencil;
    float pen;
    float eraser;
    cout<<"Enter the price of pencil, pen, eraser respectively=";
    cin>> pencil >> pen >> eraser ;
    
    cout<<"Total cost of stationary is = "<<(pencil+pen+eraser)*1.18; // *1.18 is for adding GST to the bill.
    return 0;
}