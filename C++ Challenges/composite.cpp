
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    bool flag=true;//true means prime;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=false;//false means composite;
            break;
        }
    }
    if(flag==true){
        cout<<"prime";

    }
    if(n==1){
        cout<<"Neither prime nor composite";
    }
    else{
        cout<<"composite";
    }

}





// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0){
//             cout<<"Composite";
//             break;
//         }
//     }

// }