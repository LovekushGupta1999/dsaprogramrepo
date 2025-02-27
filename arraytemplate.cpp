#include<iostream>
using namespace std;
#include<array> // for using array function
#include<algorithm>  //for using universal function like sort 
int main(){
    array<int,6>arr{2,5,3,6,8,1};
    for(int i;i<10;i++){
        cout<<arr[i]<<" "; //output is given garbage value 
        cout<<arr.at(i)<<" ";  //output- out of range not given garbage value
       }
    sort(arr.begin(),arr.end());
    cout<<"min="<<arr.front();
    cout<<"max="<<arr.back();
}