// First best question solve by myself.
#include<iostream>
using namespace std;
void printSubarrays(int *arr, int n){
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            for(int i=start; i<=end; i++){
                cout<<arr[i];
            }
            cout<<", ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    printSubarrays(arr,n);
    return 0;
}



/*
Firstly start use this approach.
#include<iostream>
using namespace std;
void printSubarrays(int *arr, int n){
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            cout<<"("<<arr[start]<<","<<arr[end]<<")";
        }
        cout<<endl;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    printSubarrays(arr,n);
    return 0;
}
*/