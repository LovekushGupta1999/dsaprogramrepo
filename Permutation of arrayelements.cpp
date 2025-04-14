#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> getpermutation(vector<int>&nums,int idx,vector<vector<int>>&ans){
 if(idx==nums.size()){
    ans.push_back(nums);
    return;
 }
for(int i=idx; i<nums.size();++i)
{
    swap(nums[idx],nums[i]);
    getpermutation(nums,idx+1,ans);
    swap(nums[idx],nums[i]);
}

 return ans;
}

int main(){
    vector<int>v{1,2,3};
    vector<vector<int>>ans;
    ans=getpermutation(v,0,ans);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}