#include <bits/stdc++.h>
using namespace std;

bool isrightplace(vector<string>)

 vector<vector<int>> NQueenpro(vector<string>&S,int row,int n,vector<vector<int>>&ans){
    if(row==n){
        ans.push_back(s);
        return;
    }
       for(j=0;J<n;j++){
        if(isrightplace(s,row,j,n))
           s[row][j]="Q";
           NQueenpro(s,row+1,n,ans);
           s[row][j]=".";
       } 
}

int main(){
    vector<vector<int>>ans;
    vector<string>s={"....","....","....","...."};
    int n=4;
    ans=NQueenpro(s,0,n,ans);
    return 0;
}