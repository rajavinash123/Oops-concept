#include<iostream>
using namespace std;
void changeA(int &b){ //  pass by referene by using alis
    b=30;
}
int main(){
    int x=2;
    changeA(x);
    cout<<"innside main funx: "<<x;
    return 0;

}