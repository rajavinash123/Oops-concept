#include<iostream>
using namespace std;

class student {
public:
    string name;
    
    // Constructor
    student(string n) {
        name = n;
        cout << "constructor called" << endl;
    }
    
    // Destructor
    ~student() {
        cout << "destructor called" << endl;
    }
};

int main() {
    student s("Avinash");
    cout << "name: " << s.name << endl;
    return 0;
}
