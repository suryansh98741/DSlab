#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int a[MAX], n;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i=0; i<n; i++) cin >> a[i];

    int i=0, j= n-1;
    while (i<j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++; j--;
    }

    cout << "Reversed array: ";
    for (int k=0; k<n; k++) cout <<a[k]<< " ";
    cout << "\n";
    return 0;
}