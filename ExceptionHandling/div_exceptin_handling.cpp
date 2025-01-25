#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"enter the value a and b=:";
    cin >> a >> b;
    try
    {
        if (b != 0)
            c = a / b;
        else
            throw(b);
        cout << c;
    }
    catch (int b)
    {
        cout << "exception occurred: b = " << b;
    }
    return 0;
}
