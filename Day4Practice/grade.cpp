#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your marks";
    cin>>n;
    if(n>=90 and n<100){
        cout<<"Grade A+";
    }
    else if(n>=80 and n<90){
        cout<<"Grade A";
    }
    else if(n>=70 and n<80){
        cout<<"Grade B+";
    }
    else if(n>=60 and n<70){
        cout<<"Grade B";
    }
    else{
        cout<<"Fail";
    }
}