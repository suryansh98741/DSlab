#include <iostream>
using namespace std;

int main() {
    const int MAX=20;
    int r, c, A[MAX][MAX];

    cout << "Enter rows and cols: ";
    cin >> r >> c;

    cout << "Enter elements (" <<r<< "x" <<c<< "):\n";
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
            cin >> A[i][j];

    cout << "Transpose (" <<c<< "x" <<r<< "):\n";
    for (int j=0; j<c; j++) {
        for (int i=0; i<r; i++) cout << A[i][j] << " ";
        cout << "\n";
    }
    return 0;
}