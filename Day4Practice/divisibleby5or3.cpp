#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n%5==0 or n%3==0){//if(n%5==0 || n%3==0)
        cout<<"number  "<<n<<" divisible by  5 or 3";
    }
    else{
        cout<<"number  "<<n<<" is not divisible by  5 or 3";
    }
}