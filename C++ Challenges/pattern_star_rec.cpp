#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the value of m";
    cin>>m;
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i=1;i<=m;i++){
        for (int j = 1; j<=n; j++)
        {
            cout<<" *";
        }
        cout<<endl;
        
    }

// }
// output:
// Enter the value of m: 4
// Enter the value of n: 5
//     * * * * *
//     * * * * *
//     * * * * * 
//     * * * * *
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the value of m";
    cin>>m;
    for(int i=1;i<=m;i++){
        for (int j = 1; j<=m; j++)
        {
            cout<<" *";
        }
        cout<<endl;
        
    }

}

// output:
// Enter the value of m: 4

//     * * * * 
//     * * * * 
//     * * * *  
//     * * * *
