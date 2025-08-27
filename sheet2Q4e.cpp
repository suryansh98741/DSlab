#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch;
    cout<< "Enter a character: ";
    cin>>ch;

    if (isupper(ch)) {
        ch=tolower(ch);
        cout<< "Lowercase: "<<ch<<"\n";
    } else {
        cout<< "Already lowercase or not an uppercase letter.\n";
    }
    return 0;
}