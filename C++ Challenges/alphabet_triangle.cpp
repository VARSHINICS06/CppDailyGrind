#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter side of square: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j = 1; j<=i; j++)
        {
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
        
    }
}

// output:
// Enter side of square: 6
// A 
// A B
// A B C
// A B C D
// A B C D E 
// A B C D E F