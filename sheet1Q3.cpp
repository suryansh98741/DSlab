#include <iostream>
using namespace std;

/*Prediction: 10000 because Only the first element is set to 1;
*/

int main() {
    int arr[5] = {1};
    for (int i = 0; i < 5; i++) cout << arr[i];
    cout << "\n"; // prints: 10000
    return 0;
}