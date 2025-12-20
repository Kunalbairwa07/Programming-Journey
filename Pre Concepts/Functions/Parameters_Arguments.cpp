#include <iostream>
using namespace std;

int sum(int a, int b) // a & b are the parameters.
{ 
    int sum = a + b;
    return sum;
}
int main()
{
    int s = sum(2, 3); // 2 & 3 are the Arguments.
    cout << "Sum = " << s << endl;
    return 0;
}

/*

One More Aproach with Fwd Declaration Method.

int sum (int a, int b);

int main(){
    int s = sum(2,3);
    cout<<"Sum = "<<s<<endl;
    return 0;
}

int sum (int a, int b){
    int sum = a+b;
    return sum;

}*/