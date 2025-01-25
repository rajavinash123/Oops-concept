#include<iostream>
using namespace std;
int main(){
    int a=9;
    int *ptr=&a;
    int **preptr=&ptr;
    cout<<&ptr<<endl;
    cout<<preptr<<endl;
    return 0;

}