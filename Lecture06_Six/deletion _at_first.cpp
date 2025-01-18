#include <iostream>
using namespace std;

int main() {
    int array [10], n;
    cout << "Enter size of an array: ";
    cin >> n;
    cout << "Enter 10 elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++) {
        array[i] = array[i + 1];
    }
    n--;
    cout << "The new array is: ";
    for (int i = 0; i < n; i++) {
        cout << "Index: " << i << " Value: " << array[i] << endl;
    }
    return 0;
}