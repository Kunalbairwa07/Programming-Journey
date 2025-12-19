/*
THE FUNCTIONS
returnType fName(){
//do some work
return some value;
}

fName(); // Function Call
*/
#include <iostream>
using namespace std;

void SayHello(){
    cout<<"Hello User."<<endl;
}

void Assistant(){
    SayHello();
    cout<<"Work Is Done..";
}
int main(){
    Assistant();
    return 0;
}