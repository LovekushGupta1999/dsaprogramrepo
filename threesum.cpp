#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threesum(vector<int> &nums){
    vector<vector<int>>output;
    set<vector<int>>s;
    sort(nums.begin(), nums.end());
    int target=0;
    for(int i=0;i<nums.size();i++){
        int j=i+1;
        int k=nums.size()-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==target){
                s.insert({nums[i],nums[j],nums[k]});
                j++;
                k--;
                
            }
            else if(sum<target){
                j++;
            }
            else{
                k--;
            }
        }
    }
    
    for(auto p:s){
        output.push_back(p);
    }
    return output;
}

int main() {
	vector<int>vec={1,2,3,4,-5,-3,7,3,1};
	vector<vector<int>>vec1;
	vec1=threesum(vec);
	
      for(auto p:vec1){
        for(auto a:p){
            cout<<a<<" ";
        }
        cout<<endl;
    }
}
