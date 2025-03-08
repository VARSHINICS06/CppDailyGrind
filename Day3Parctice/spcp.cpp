#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter value of cost price: ";
    cin>>cp;
    int sp;
    cout<<"Enter value of cost price: ";
    cin>>sp;
    if(sp>cp) {
      cout<<"Profit";
    }
    if(cp>sp){
        cout<<"loss";
    }
    
    else{
      cout<<"no profit no loss";
    }

}