#include <iostream>
using namespace std;

int main() {
    int array [10], n, val, pos;
    cout << "Enter size of an array less than 10: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "Enter the element to be inserted: ";
    cin >> val;
    cout << "Enter the index at which the element is to be inserted: ";
    cin >> pos;
    for (int i = n; i > pos; i--) {
        array[i] = array[i - 1];
    }
    array[pos] = val;
    n++;
    cout << "The new array is: ";
    for (int i = 0; i < n; i++) {
        cout << "Index: " << i << " Value: " << array[i] << endl;
    }
    return 0;
}