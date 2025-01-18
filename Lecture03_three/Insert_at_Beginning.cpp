#include <iostream>
using namespace std;

int main() {
    int array [10], n, x;
    cout << "Enter size of an array: ";
    cin >> n;
    cout << "Enter 10 elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "Enter the element to be inserted at the beginning: ";
    cin >> x;
    for (int i = n; i > 0; i--) {
        array[i] = array[i - 1];
    }
    array[0] = x;
    n++;
    cout << "The new array is: ";
    for (int i = 0; i < n; i++) {
        cout << "Index: " << i << " Value: " << array[i] << endl;
    }
    return 0;
}