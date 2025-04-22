#include <bits/stdc++.h>
using namespace std;

bool isrightplace(vector<string>&s,int r,int j,int n){
    for(int j=0;j<n;j++){
    if(s[r][j]=='Q')
    return false;
   }
   
   for(int r=0;r<n;r++){
    if(s[r][j]=='Q')
    return false;
}
   
for(int i=r; int k=j;k,i>0;k--;i--){
    if(s[r][j]=='Q')
    return false;
}

}
 vector<vector<int>> NQueenpro(vector<string>&S,int row,int n,vector<vector<int>>&ans){
    if(row==n){
        ans.push_back(s);
        return;
    }
       for(int j=0;J<n;j++){
        if(isrightplace(s,row,j,n)){
           s[row][j]='Q';
           NQueenpro(s,row+1,n,ans);
           s[row][j]=''.';
         } 
            }
 }
int main(){
    vector<vector<int>>ans;
    vector<string>s={"....","....","....","...."};
    int n=4;
    ans=NQueenpro(s,0,n,ans);
    return 0;
}