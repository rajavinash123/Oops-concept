#include <iostream>
using namespace std;

class Addition { 
    int a, b, c;

public:
    void input() { 
        cout << "Enter the values: ";
        cin >> a >> b; 
    }

    void output() {
        c = a + b;
        cout << "Addition: " << c << endl; 
    }
};

int main() {
    Addition a;  
    a.input();
    a.output();
    return 0; 
}
