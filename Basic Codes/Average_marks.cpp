#include<iostream>
using namespace std;
int main(){
    int Maths;
    int Science;
    int English;

    cout<<"Enetr the marks of Maths = ";
    cin>>Maths;
    cout<<"Enetr the marks of Science = ";
    cin>>Science;
    cout<<"Enetr the marks of English = ";
    cin>>English;

    float Avg = (float)(Maths+Science+English)/3; // (float) type caste 
    cout<<"The Average Marks is = "<< Avg <<endl;
    return 0;
}