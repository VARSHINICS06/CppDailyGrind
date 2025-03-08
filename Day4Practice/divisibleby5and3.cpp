#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"number"<<n<<" divisible by both 5 and 3";
    }
    else{
        cout<<"number"<<n<<" is not divisible by both 5 and 3";
    }
}