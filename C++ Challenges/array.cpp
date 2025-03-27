#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Print array elements
    cout << "Array elements are: ";
    for(int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}







#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Taking input
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Displaying output
    cout << "You entered: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}






#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "Maximum element is: " << maxElement;
    return 0;
}



