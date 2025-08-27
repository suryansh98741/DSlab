#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int a[MAX];
    int n = 0;            // current size
    int choice;

    do {
        cout << "\n ARRAY MENU \n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice==1) {
            cout<< "Enter number of elements (1-" << MAX << "): ";
            cin>>n;
            if (n<1||n>MAX) 
            {cout<< "Invalid size. Setting size=0.\n";
                n=0;} else 
                {cout<< "Enter " << n << " elements: ";
                for (int i=0; i<n; i++) cin>> a[i];}
        }
        else if (choice==2) {
            if (n == 0) cout<< "Array is empty.\n";
            else 
            {cout<< "Array: ";
                for (int i=0; i<n; i++) cout<< a[i]<< " ";
                cout << "\n";}
        }
        else if (choice==3) {
            if (n >= MAX) 
            {cout<< "Array is full. Cannot insert.\n";} 
            else {
                int pos, val;
                cout<< "Enter position to insert (1 to " << (n + 1) << "): ";
                cin>>pos;
                cout<< "Enter value: ";
                cin>>val;
                if (pos<1||pos>n+1) {
                    cout<< "Invalid position.\n";
                } else {
                    // shift right
                    for (int i=n; i>=pos; i--) a[i] = a[i - 1];
                    a[pos - 1]=val;
                    n++;
                    cout<< "Inserted.\n";
                }
            }
        }
        else if (choice==4) {
            if (n == 0)
            {cout<< "Array is empty. Nothing to delete.\n";} 
            else {
                int pos;
                cout<< "Enter position to delete (1 to " << n << "): ";
                cin>>pos;
                if (pos<1||pos>n) {
                    cout<< "Invalid position.\n";
                } else {
                    // shift left
                    for (int i=pos-1; i<n-1; i++) a[i]=a[i + 1];
                    n--;
                    cout << "Deleted.\n";
                }
            }
        }
        else if (choice==5) {
            if (n==0) cout << "Array is empty.\n";
            else {
                int key, found = 0;
                cout<< "Enter value to search: ";
                cin>> key;
                cout<< "Positions (1-based): ";
                for (int i=0; i<n; i++) {
                    if (a[i]==key) {
                        cout<< (i + 1) << " ";
                        found=1;
                    }
                }
                if (!found) cout<< "Not found";
                cout << "\n";
            }
        }
        else if (choice == 6) {
            cout<< "Exiting...\n";
        }
        else {
            cout<< "Invalid choice.\n";
        }
    } while (choice != 6);

    return 0;
}