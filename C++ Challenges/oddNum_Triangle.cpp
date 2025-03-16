#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j+=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        int a=1;
     for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a=a+2;
        }
        cout<<endl;
    }
}

//output:
// Enter the number of rows:4
// 1 
// 1 3
// 1 3 5
// 1 3 5 7



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }
}


//output:
// Enter the number of rows:4
// 1 
// 3 3 
// 5 5 5
// 7 7 7 7