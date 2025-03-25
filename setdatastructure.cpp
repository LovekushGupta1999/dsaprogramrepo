#include <iostream>
// #include <map>
//#include <unordered_set> // Correct header for unordered set
#include<set>
using namespace std;

int main() {

    set<int>s{10,20,30,40,50,100,20};
    for (auto p: s)
    {
        cout<<p<<'\t';

    }
    s.insert(34);
    s.insert(34);
    cout<<endl;
    for (auto p: s)
    {
        cout<<p<<'\t';

    }
    auto t=s.find(34);
    if(t!=s.end()){
        cout<<*t;
    }
    else{
        cout<<"not found";
    }
    cout<<*t;
  auto it=s.begin();
  cout<<*it;

  auto p=s.find(34)
  if(p!=s.end()){
    s.erase(p)
    cout<<"deletion done"
   }
else{
    cout<<"not found";
}
}