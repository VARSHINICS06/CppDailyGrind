#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st side: ";
    cin>>a;
    cout<<"Enter 2nd side: ";
    cin>>b;
    cout<<"Enter 3rd side: ";
    cin>>c;
    if((a+b)>c and (a+c)>b and (b+c)>a){
        cout<<"valid triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
}