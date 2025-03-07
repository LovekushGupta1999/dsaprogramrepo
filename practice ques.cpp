 
#include <bits/stdc++.h>
using namespace std;
#include<vector>

  void duplicateremove(vector<int>&vec){
    int k=0;
    int count=0;
      for(int i=0; i<vec.size();++i){
         if(vec[i]==-1){count++;
         continue;
          }
          for(int j=i+1;j<vec.size(); ++j){
              if(vec[i]==vec[j]){
                  vec[j]=-1;
              }
          }
          vec[k]=vec[i];
          k++;
          
      }
     
   
   for(auto i=1; i<=count; ++i){
         
             vec.pop_back();
         
     }
      
      
  }

int main() {
vector<int>v1={1,2,3};
vector<int>v2={1,5};
vector<int>v3={7,1,2,3,1,5,3,4,6};

for(int i=1;i<=v1.size();i++){
    if(i<=v2.size()){
    cout<<v1[v1.size()-i]+v2[v2.size()-i];
    }
    else{
    cout<<v1[v1.size()-i];
    }
}
cout<<endl;

  duplicateremove(v3);
  sort(v3.begin(),v3.end());
  for(int i=0; i<v3.size();++i){
      cout<<v3[i];
  }

}
