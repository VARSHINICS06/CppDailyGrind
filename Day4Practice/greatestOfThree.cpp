#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st number";
    cin>>a;
    cout<<"Enter 2nd number";
    cin>>b;
    cout<<"Enter 3rd number";
    cin>>c;
    if(a>b and a>c){
        cout<<"number "<<a<<"is greater than "<<b<<"and"<<c;
    }
    if(b>a and b>c){
        cout<<"number "<<b<<"is greater than "<<a<<"and"<<c;
    }
    else{
        cout<<"number "<<c<<"is greater than "<<a<<"and"<<b; 
    }


}