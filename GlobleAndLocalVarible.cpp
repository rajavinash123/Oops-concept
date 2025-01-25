#include <iostream>
using namespace std;

int x = 20; // Global variable

int main() {
    int x = 30; // Local variable
    cout << "Local variable: " << x << endl; // Accessing local variable
    cout << "Global variable: " << ::x << endl; // Accessing global variable using scope resolution operator(::)
    return 0;
}
