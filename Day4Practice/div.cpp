//divisible by 5 or 3 but not divisible by 15
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if((n%5==0 or n%3==0) and (n%15!=0)){//if(n%5==0 || n%3==0)
        cout<<"number is divisible by 5 or 3 but not divisible by 15 ";
    }
    else{
        cout<<"number  is divisible by 15";
    }
}