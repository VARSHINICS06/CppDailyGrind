
// #include <iostream>
// using namespace std;
// int sum(int a, int b)
// {
//     cout << a + b;
// }
// int main()
// {
//     sum(99, 88);
// }

// #include <iostream>
// using namespace std;
// int fact(int x)
// {
//     int f = 1;
//     for (int i = 1; i <= x; i++)
//     {
//         f *= i;
//     }
//     return f;
// }
// int ncr(int n, int r)
// {

//     return fact(n) / (fact(r) * fact(n - r));
// }

// int main()
// {
//     int n;
//     cout << "Enter n:";
//     cin >> n;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << ncr(i, j) << " ";
//         }
//         cout << endl;
//     }
// }

// output
//  Enter n:5
//  1
//  1 1
//  1 2 1
//  1 3 3 1
//  1 4 6 4 1
//  1 5 10 10 5 1

#include <iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int ncr(int n, int r)
{

    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= 1; j++)
        {
            cout << ncr(i, j) << "   ";
        }
        cout << endl;
    }
}

// output
//  Enter n:5
//  1
//  1 1
//  1 2 1
//  1 3 3 1
//  1 4 6 4 1
//  1 5 10 10 5 1