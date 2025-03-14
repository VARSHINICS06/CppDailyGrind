#include <iostream>

using namespace std;

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) { 
            // Print numbers for odd rows
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
        } else {
            // Print uppercase letters for even rows
            for (char ch = 'A'; ch < 'A' + i; ch++) {
                cout << ch;
            }
        }
        cout << endl; // Move to the next line
    }

    return 0;
}

//output:
// 1
// AB
// 123
// ABCD
// 12345