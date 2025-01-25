#include<iostream>
using namespace std;
int main(){
    int x=5;
    int *ptr=&x;
    cout<<ptr<<endl;
    cout<<&x<<endl;
    cout<<&ptr<<endl;
    return 0;
}