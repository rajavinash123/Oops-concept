 #include<iostream>
 using namespace std;
 class parent{
    public:
    void getInfo(){
        cout<<"parent class";

    }

    virtual void hello(){
        cout<<"hello parent";
    }
 };
class child :public parent{
    public:
    void getInfo(){
         cout<<"child class\n";

    }
     void hello(){
        cout<<"hello chld";
    }
   
};
int main(){
    child c1;
    c1.hello();
    c1.getInfo();
    return 0;
}