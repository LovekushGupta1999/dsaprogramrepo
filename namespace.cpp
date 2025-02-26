#include<iostream>
using namespace std;
namespace cybrom{
    int a=10;
    int b=20;
    void show(){
        cout<<"result="<<a+b;

    }
   class bhopal{
    public:
    int sqrt(int a){
        return a*a;
    }
   };

   class iostreamx{
    public: void fun(){
        cout<<"fun";
    }
   }coutx;

}
using namespace cybrom;
int main(){
  cout<<a;
  show();

  bhopal obj1;
  cout<<obj1.sqrt(9);
  coutx.fun();



}