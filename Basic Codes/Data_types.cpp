#include<iostream>
#include<iomanip>// it is use for increase set precision value
using namespace std;
int main(){
    int age = 18; //Integer type
    int marks = 70;
    char grade = 'A'; // Character Type
    bool isAdult = true; // Boolean Type
    float CGPA = 7.5; // Float Type
    double PI = 3.145642890153;
    cout<<age<<" "<<marks<<" "<<grade<<" "<<" "<<isAdult<<" "<<CGPA<< " "<<endl; 
    cout<<"Size of int = "<< sizeof(int)<<endl; // sizeof is the function which show the size of data types.
    cout<<"Size of char = "<< sizeof(char)<<endl;// by default set precision of cout is 5.  
    cout<<"Size of bool = "<< sizeof(bool)<<endl;
    cout<<"Size of float = "<< sizeof(float)<<endl;
    cout<<"Size of double = "<< sizeof(double)<<endl;
    cout<<setprecision(10)<< PI << "" <<endl;//setprecison(---) function is used for increase the length.
    return 0;
}