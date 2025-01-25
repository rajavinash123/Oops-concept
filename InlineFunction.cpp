#include<iostream>
using namespace std;  
// inline return type function name(paramater)

inline  int add(int a,int b){
    return a+b;

}
int main(){
   int sum=0;
   sum= add(20,30);
  cout<<"Sum of number: "<<sum;
  return 0;

}