#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>V1;
    int row , col;
    int value;
    cout<<"enter the size of row\n";
    cin>>row;
    cout<<"enter the size of column\n";
    cin>>col;
    for(int i=0; i<row; ++i)
    {
        vector<int>V2;
        for(int j=0; j<col; ++j)
        {
            cout<<"enter value\n";
            cin>>value;
            V2.push_back(value);
        }
        V1.push_back(V2);
    }
    cout<<"the stored valuse are\n";
    for(int i=0; i<V1.size(); ++i)
    {
        for(int j=0; j<V1[i].size(); ++j)
        {
            cout<<V1[i][j]<<"\t";
        }
        cout<<"\n";
    }
}