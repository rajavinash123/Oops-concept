#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override { // Overriding the sound function
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override { // Overriding the sound function
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal *a;
    Dog d;
    Cat c;

    // Pointer of type Animal pointing to Dog object
    a = &d;
    a->sound(); // Calls Dog's sound function

    // Pointer of type Animal pointing to Cat object
    a = &c;
    a->sound(); // Calls Cat's sound function

    return 0;
}


