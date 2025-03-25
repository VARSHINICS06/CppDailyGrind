// Swap by value
#include <iostream>
using namespace std;

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue - a: " << a << ", b: " << b << endl;
}

int main()
{
    int x = 10, y = 20;
    cout << "Before swapByValue - x: " << x << ", y: " << y << endl;
    swapByValue(x, y);
    cout << "After swapByValue - x: " << x << ", y: " << y << endl;
    return 0;
}

// output
// Before swapByValue - x: 10, y: 20
// Inside swapByValue - a: 20, b: 10
// After swapByValue - x: 10, y: 20

// swap by Reference
#include <iostream>
using namespace std;

void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference - a: " << a << ", b: " << b << endl;
}

int main()
{
    int x = 10, y = 20;
    cout << "Before swapByReference - x: " << x << ", y: " << y << endl;
    swapByReference(x, y);
    cout << "After swapByReference - x: " << x << ", y: " << y << endl;
    return 0;
}

// output

// Before swapByReference - x: 10, y: 20
// Inside swapByReference - a: 20, b: 10
// After swapByReference - x: 20, y: 10