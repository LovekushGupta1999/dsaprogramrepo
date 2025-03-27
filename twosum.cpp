#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> twosum(vector<int>& nums) {
    vector<vector<int>> output;
    set<vector<int>> s;
    int target = 9;
  
    
    sort(nums.begin(), nums.end());
  
    
    int j = 0;
    int k = nums.size() - 1;
  
    while (j < k) {
        int sum = nums[j] + nums[k];
        
        if (sum == target) {
            s.insert({nums[j], nums[k]});
            j++;
            k--;
        }
        else if (sum < target) {
           
            j++;
        }
        else {
            
            k--;
        }
    }
    

    for (auto p : s) {
        output.push_back(p);
    }

    return output;
}

int main() {
    vector<int> vec = {5, 4, 3, 4, -5, -3, 7, 5, 4};
    vector<vector<int>> vec1 = twosum(vec);
    

    for (auto p : vec1) {
        for (auto a : p) {
            cout << a << " ";
        }
        cout << endl;
    }

    return 0;
}
