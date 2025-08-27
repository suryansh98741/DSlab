#include <iostream>
using namespace std;
int main() {
    const int MAX=100;
    int arr[MAX], n;

    cout<< "Enter n (total numbers expected): ";
    cin>>n;
    cout<< "Enter " <<n-1<< " elements in sorted order: ";
    for(int i=0; i<n-1; i++) cin>>arr[i];

    int low=0, high=n-2, mid, missing = n;

    while (low <= high) {
        mid=(low + high)/2;
        if (arr[mid] != mid + 1) {
            missing=mid+1;
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }

    cout<< "Missing number: " << missing << "\n";
    return 0;
}