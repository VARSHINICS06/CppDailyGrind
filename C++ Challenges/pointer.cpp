// call by pointer5
#include <iostream>
using namespace std;

// Function to swap values using pointers
void swapUsingPointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    // Calling function using pointers
    swapUsingPointers(&x, &y);

    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}

// output
//  Before swap: x = 10, y = 20
//  After swap: x = 20, y = 10

// Function Returning Pointer

#include <iostream>
using namespace std;

// Function that returns a pointer to a variable
int *getPointerToValue(int &a)
{
    return &a;
}

int main()
{
    int num = 50;
    int *ptr = getPointerToValue(num);

    cout << "Value of num: " << *ptr << endl;
    cout << "Address of num: " << ptr << endl;
    return 0;
}

// output
// Value of num: 50
// Address of num: 0x7ffee72bc9d8