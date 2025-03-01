#include<iostream>
using namespace std;
#include<vector>
#include<iterator>

int main(){
vector<int>v{3,4,4,6,2};
vector<int>v1(5);  // size is fixed with (5),default value =0
vector<int>v2(5, 100) ;  // initialized all 5 indexes with default value 100
for(auto p:v){  // auto is work as pointer 
    cout<<p<<"\t";
}
for(auto t:v1)
  cin>>t;
   
}

vector<int>::iterator it=v1.begin();
vector<int>::iterator it=v1.end(); // it represent -1 index of vector 
v1.insert(it,45);