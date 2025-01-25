#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int age;
};
class student:public person{
    public:
    int roll;
};
class GradutStudent: public student{
    public:
    string reacherArea;
};
int main(){
    GradutStudent s1;
    s1.name="Avinash ";
   s1.reacherArea="Quantum reacher";
   cout<<s1.name<<endl<<s1.reacherArea<<endl;
   return 0;
}