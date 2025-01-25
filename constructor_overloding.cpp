#include<iostream>
using namespace std;
class student{
    public:
    string name;
    student(){
        cout<<"non-parameter constructor\n";

    }

    student(string name){
        this->name=name;
        cout<<"parametre constructer";
    }
};
int main(){
    // student s1;//non parameter construcet call when objet is created
   student s1("ram");//when pass through object then call parameter constructer
    return 0;
}