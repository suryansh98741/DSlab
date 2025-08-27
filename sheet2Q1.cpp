#include <iostream>
using namespace std;
int main() {
    const int MAX=100;
    int arr[MAX], n, key;

    cout<<"Enter number of elements: ";
    cin >> n;
    cout <<"Enter"<<n<<"elements(sorted) ";
    for (int i=0;i<n; i++)cin>>arr[i];

    cout<<"Enter element to search: ";
    cin>>key;

    int low=0, hig=n-1, mid;
    bool found=false;

    while (low <= high) {
        mid=(low + high)/2;
        if (arr[mid]==key) {
            cout << "Element found at position " <<mid+1<< "\n";
            found=true;
            break;
        }
        else if (key < arr[mid]) {
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }

    if (!found) cout<<"Element not found\n";
    return 0;
}