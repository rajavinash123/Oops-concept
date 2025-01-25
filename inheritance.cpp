#include<iostream>
using namespace std;


class person{
    public:
    string name;
    int age;

    person(){
        cout<<"based class ya parent ....\n";
    }
};

class student:public person{
    public:
    int roll;
 student(){
        cout<<"derive  class ya child  ....\n";
    }
    void getInfo(){
        cout<<"name:"<<name<<endl;
         cout<<"age:"<<age<<endl;
          cout<<"roll:"<<roll<<endl;
           
    }
};

int main(){
    student s1;
    s1.name="rahul";
    s1.age=38;
    s1.roll=2338912;
    s1.getInfo();
    return 0;
}