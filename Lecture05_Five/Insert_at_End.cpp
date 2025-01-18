#include <iostream>
using namespace std;
int main() {
    int a[10], n, x;
    cout << "Enter size of an array: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter the element to be inserted at the end: ";
    cin >> x;
    a[n] = x;
    n++;
    cout << "The new array is: ";
    for (int i = 0; i < n; i++) {
        cout << "Index: " << i << " Value: " << a[i] << endl;
    }
    return 0;
}