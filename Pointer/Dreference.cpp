#include<iostream>
using namespace std;
int main(){
    int x=2;
    int *ptr=&x;
    cout<<*(ptr)<<endl;//dreference
    cout<<ptr<<endl;
    cout<<*(&x)<<endl;
}
