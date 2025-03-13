#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int mul=1;
    while (n!=0)
    {
        int ld=n%10;
        n=n/10;
        mul*=ld;
    }
    cout<<mul;
    

}