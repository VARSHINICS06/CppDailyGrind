
// Recursive function to calculate factorial

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1; // Base case
    else
        return n * factorial(n - 1); // Recursive call
}

int main()
{
    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}

// output

// Enter a number to find its factorial: 5
// Factorial of 5 is: 120

// Recursive function to get Fibonacci number

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n; // Base case
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}

// output
// Enter the number of terms: 7
// Fibonacci Series: 0 1 1 2 3 5 8