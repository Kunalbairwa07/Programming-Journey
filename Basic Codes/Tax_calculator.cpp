#include <iostream>
using namespace std;
int main(){
    int income;
    cout<<"Enter the income in Lakhs = "<<endl;
    cin>>income;
    if(income<=5){
        cout<<"Your total tax is o% = "<< income-income<<" lakh" <<endl;
    }
    else if (income>=5 && income <= 10){
        cout<<"Your total tax is 20% = "<< (income*1.20)-income<<" lakh"<<endl;
    }
    else{
        cout<<"your total tax is 30% = "<< (income*1.30)-income <<" lakh "<<endl;
    }
    return 0;
}
//  By else if statements.......