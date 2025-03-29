#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) 
        return false;
    if (n <= 3) 
        return true;
    
    // Check divisibility by 2 and 3
    if (n % 2 == 0 || n % 3 == 0) 
        return false;

    // Check for factors using 6k ± 1 optimization
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) 
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}