#include<iostream>
using namespace std;
#include<array> // for using array function
#include<algorithm>  //for using universal function like sort 
int main(){
    array<int,6>arr{2,5,3,6,8,1};
    sort(arr.begin(),arr.end());
    int res=false;

    for(int i=arr.size()-2;i>=0;i--){
        if(arr[i]!=arr[arr.size()-1]){
            cout<<arr[i];
            res =true;
            break;
        }
       }
       if(res==false){

    cout<<"not present";
    }
}

// using function

// #include<iostream>
// using namespace std;
// #include<cmath>
// #include<array> // for using array function
// #include<algorithm>  //for using universal function like sort 


//  int secondmax(array<int,7> arr){
//        for(int i=arr.size()-2;i>=0;i--){
           
//            if(arr[i]!=arr[arr.size()-1]){
//                return arr[i];
//                }
//  }
//  return -1;
//  }

// int main(){

//     array<int,7>arr={2,5,3,6,7,8,1};
    
//     sort(arr.begin(),arr.end());
    
//     cout<<secondmax(arr);
  
       
//        }
  
      
