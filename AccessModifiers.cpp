#include<iostream>
using namespace std;
class teacher{
    private:
    double sellary;
    public:
    string name;
    string dept;
    string subject;

void changDep(string newDept){
    dept=newDept;
}
void setSellary(double s){
    sellary=s;
    

}
double getSellary(){
    return sellary;
}
};
int main(){
teacher t1;
t1.name="Avinash";
t1.dept="cse";
t1.setSellary(34888);
cout<<t1.getSellary()<<endl;
cout<<t1.name<<endl;


}

