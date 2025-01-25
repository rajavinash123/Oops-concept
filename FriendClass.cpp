
#include<iostream>
using namespace std;

class A {
    private:
    int a, b;

    public:
    A(int x, int y) : a(x), b(y) {} // Constructor to initialize a and b

    void show() {
        cout << "A: " << a << " B: " << b << endl;
    }

    // Declare friend function
    friend void add(A &r);
};

void add(A &r) {
    int sum = r.a + r.b;
    cout << "Sum: " << sum << endl;
}

int main() {
    A obj(3, 4); // Initialize obj with values
    obj.show();
    add(obj); // Call friend function
    return 0;
}
