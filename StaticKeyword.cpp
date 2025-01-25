

// #include<iostream>
// #include<string>
// using namespace std;
// void fun(){
//    int x=0;
//    cout<<"x: "<<x<<endl;
//    x++;
// }
// int main(){
//     fun();
//     fun();
//     return 0;
// }

//output 0 0 no matter how much time the call take

#include<iostream>
#include<string>
using namespace std;
void fun(){
    static int x=0;
   cout<<"x: "<<x<<endl;
   x++;
}
int main(){
    fun();
    fun();
    return 0;
}
