#include <iostream>
using namespace std;
int main() {
    const int MAX = 100;
    int a[MAX], n;

    cout << "Enter number of elements (1-" << MAX << "): ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] == a[i]) {
                // delete a[j] by shifting left
                for (int k = j; k < n - 1; k++) a[k] = a[k + 1];
                n--;
                j--; // re-check the new element at position j
            }
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\nTotal unique elements: " << n << "\n";
    return 0;
}