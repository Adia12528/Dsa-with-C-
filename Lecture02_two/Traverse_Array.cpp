#include <iostream>
using namespace std;
int main(){
    int a [5] = {8, 5, 6, 9, 7};
    //Traverse the array 
    for (int i = 0; i <= 4; i++){
        cout << "Index: " << i << " Value: " << a[i] << endl;
    }
    return 0;
}