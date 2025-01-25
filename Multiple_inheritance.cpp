#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int roll;

};
class teacher{
    public:
    string subject;
    double salary;
};
class TA:public student,public teacher{

};
int main(){
    TA s1;
    s1.name="tommy";
    s1.subject="OOPs concept ";
   cout<<s1.name<<endl;
   cout<<s1.subject<<endl;
}