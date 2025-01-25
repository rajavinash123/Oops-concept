#include <iostream>
using namespace std;
class customer
{
    string name;
    int balance, account_number;

public:
    customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    } // deposite
    void deposite(int amount)
    {
        if (amount > 0)
        {
            cout << amount << "Amount is caridit is sucess!";
        }
    }

    // widrow

    void withdraw(int amount)
    {
        if (balance > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << "is debited sucessfully";
        }
    }
};
int main(){
    customer c1("avinash ",600,100);
    c1.deposite(100);
    c1.withdraw(400);
    return 0;
}