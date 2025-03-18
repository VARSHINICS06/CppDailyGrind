// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
// }


//output:
// Enter the number of rows: 5
//            *
//          * *
//        * * *
//      * * * *
//    * * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<" "<<j;
//         }
//         cout<<endl;
//     }
// }

//output:
// Enter the number of rows: 4
//          1
//        1 2
//      1 2 3
//    1 2 3 4


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<" "<<char(j+64);
//         }
//         cout<<endl;
//     }
// }


//output:
// Enter the number of rows: 4
//          A
//        A B
//      A B C
//    A B C D


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"# ";
        }
        
        cout<<endl;
    }
}

//output:
// Enter the number of rows: 4
//     # # # # 
//    # # # #
//   # # # # 
//  # # # #