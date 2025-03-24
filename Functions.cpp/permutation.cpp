#include <iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
        f *= i;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int r;
    cout << "Enter r: ";
    cin >> r;
    int a = fact(n);
    int b = fact(n - r);
    cout << a / b;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     int r;
//     cout << "Enter r: ";
//     cin >> r;
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         a *= i;
//     }
//     int b = 1;
//     for (int i = 1; i <= n - r; i++)
//     {
//         b *= i;
//     }
//     cout << a / b;
// }

// output
//  Enter n: 5
//  Enter r: 2
//  20