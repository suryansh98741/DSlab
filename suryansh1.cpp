#include <iostream>
using namespace std;

class Student {
    int id;
    string name;
public:
    Student(int i = 0, string n = "") {
        id = i;
        name = n;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    void setDetails(int i, string n) {
        id = i;
        name = n;
    }
};

Student updateByValue(Student s) {
    
    s.setDetails(101, "PassByValue");
    return s; 
}


Student* updateByAddress(Student* s) {
    // address of the object
    s->setDetails(202, "PassByAddress");
    return s; // return
}

int main() {
    Student s1(1, "Original");

    cout << "Original Object:" << endl;
    s1.display();

    // Pass by Value
    Student s2 = updateByValue(s1);
    cout << "\nAfter Pass by Value:" << endl;
    cout << "Returned Object: "; s2.display();
    cout << "Original Still: "; s1.display();

    // Pass by Address
    Student* s3 = updateByAddress(&s1);
    cout << "\nAfter Pass by Address:" << endl;
    cout << "Returned Object: "; s3->display();
    cout << "Original Changed: "; s1.display();

    return 0;
}




   
