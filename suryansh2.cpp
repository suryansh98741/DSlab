#include <iostream>
using namespace std;

class Rectangle {
int length, breadth;
public:
    
 Rectangle(int l = 0, int b = 0) {
 length = l;
 breadth = b; }
void setDimensions(int l, int b) {
    length = l;
    breadth = b;}
int area() {
        return length*breadth;
    }
    void display() {
        cout <<"Length: " << length << ", Breadth: " << breadth
             <<" Area: " << area() << endl;}};
int main() {
int n;
cout << "Enter number of rectangles: ";
cin >> n;Rectangle rect[100];  
for (int i = 0; i < n; i++) {
     int l, b;
    cout << "Enter length and breadth of rectangle " << i+1 << ": ";
    cin >> l >> b;
     rect[i].setDimensions(l, b);
    }

    cout << "Areas of Rectangles\n";
    for (int i = 0; i < n; i++) {
        cout << "Rectangle " << i+1 << ": ";
        rect[i].display();
    }
 return 0;
}