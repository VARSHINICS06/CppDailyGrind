#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char op;
    cout<<"Enter n1 value";
    cin>>n1;
    cout<<"Enter your operation";
    cin>>op;
    cout<<"Enter n2 value";
    cin>>n2;
    if(op=='+'){
        cout<<"result"<<n1 + n2;
    }
    if(op=='-'){
        cout<<"result"<<n1 - n2;
    }
    if(op=='*'){
        cout<<"result"<<n1 * n2;
    }
    if(op=='/'){
        cout<<"result"<<n1 / n2;
    }
}