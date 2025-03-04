#include<iostream>
using namespace std;
#include<vector>
#include<tuple>
int main(){
    pair<int,string>p={1,"name"} ; //In C++, pair is used to combine together two values that may be of different data types or same data types as a single unit. The first element is stored as a data member with name ‘first’ and the second element as ‘second‘.
    // we can insert data by using make_pair() function  pair<T1, T2> p = make_pair(v1, v2);
    // used to store only one pair it is not a collection of items 
// it is intigrate in another data struction to get desired data structure
// Returning multiple values from functions.
// Storing key-value pairs in other containers, especially maps.
// Sorting containers on the basis of multiple criteria.

vector<pair<int,string>>vec;
int roll , n;
string name;
 for(int i=0;i<n;i++){
    cin>>vec[i].first>>vec[i].second;
 }

 for(int i=0;i<n;i++){
    cout<<vec[i].first<<vec[i].second;
 }

 for(int i=1; i<=n; i++){
    cout<<"enter your roll no."; cin>>roll;
    cout<<"enter your name"; cin>>name;
    vec.push_back({roll,name}); //vec.push_back(make_pair(roll,name));
 }


 tuple<int,string,int>t{101,"kush",24};
 cout<<get<0>(t)<<endl;
 cout<<get<1>(t)<<endl;
 cout<<get<2>(t)<<endl;
}

