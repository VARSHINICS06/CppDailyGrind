#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    if(n>=0){
        cout<<n;
    }
    else{
        cout<<-n;
    }

    //another method to change n into absolute value
    // if(n<0){
    //     n=-n;
    //     cout<<n;
    // }

}