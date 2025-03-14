#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of row: ";
    cin>>m;
    int n;
    cout<<"Enter the number of column: ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for (int j = 1; j<=i; j++)
        {
            cout<<" *";
        }
        cout<<endl;
        
    }
}
// output:

// Enter the value of m:4
// Enter the value of n:4
//  *
//  * *
//  * * *
//  * * * *
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of row: ";
    cin>>m;
        for(int i=1;i<=m;i++){
        for (int j = 1; j<=i; j++)
        {
            cout<<" *";
        }
        cout<<endl;
        
    }
}

// output:
// Enter the number of row: 4
//  *
//  * *
//  * * *
//  * * * *