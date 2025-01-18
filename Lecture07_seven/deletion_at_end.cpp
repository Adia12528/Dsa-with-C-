#include <iostream>
using namespace std;

int main() {
    int array [10], n, i;
    cout << "Enter size of an array: ";
    cin >> n;
    cout << "Enter 10 elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    n--;
    cout << "The new array is: ";
    for (i = 0; i < n; i++) {
        cout << "Index: " << i << " Value: " << array[i] << endl;
    }
    n++;
    array[i] = 1;
    cout << "The new array after inserting 1 at the end: ";
    for (i = 0; i < n; i++) {
        cout << "Index: " << i << " Value: " << array[i] << endl;
    }
    return 0;
}