#include<iostream>
using namespace std;
class shape{//abstract class only give idea ,not create object
    public:
 virtual void drow()=0;//pure virtual function
};
class circle:public shape{
    public:
    void drow(){
        cout<<"drow a circular";
    }
     
};
int main(){
    circle c1;
    c1.drow();
}