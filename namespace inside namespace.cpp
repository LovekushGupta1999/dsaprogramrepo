#include<iostream>
using namespace std;
namespace cybrom{
 void student(){
    cout<<"student";
 }

 namespace bhopal{
    void student(){
        cout<<"bhopal";
    }
 }
}

using namespace cybrom; // using namespace cybrom::bhopal;
int main(){
  student();
  bhopal::student();

}