#include <iostream>
using namespace std;
int main() {
    const int MAX=100;
    int arr[MAX], n, sum=0;

    cout<< "Enter n (total numbers expected): ";
    cin>>n;
    cout<< "Enter " <<n -1<< " elements (1 to n, one missing): ";
    for (int i=0; i<n-1; i++) {
        cin>>arr[i];
        sum +=arr[i];
    }

    int total=(n*(n + 1))/2;
    cout<<"Missing number: " << total - sum << "\n";
    return 0;
}