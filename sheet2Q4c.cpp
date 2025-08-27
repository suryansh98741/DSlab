#include <iostream>
#include <cctype>
using namespace std;
bool isVowel(char ch) {
    ch=tolower(ch);
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}
int main() {
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);

    int k=0;
    for (int i=0; str[i] !='\0'; i++) {
        if (!isVowel(str[i])) {
            str[k++] = str[i];
        }
    }
str[k]='\0';
cout<< "String after deleting vowels: " << str << "\n";
    return 0;
}