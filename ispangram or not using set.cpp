#include <iostream>
#include <bits/stdc++.h>
#include<set>


using namespace std;

int main() {
    string s="The quick brown fox jumps over the lazy dog";
    set<char>se;


    for (int i=0;i<s.size();i++){
        
        char var=tolower(s[i]);
        if(var==' '){
            continue;
        }
     se.insert(var);
   
    }
    
   if(se.size()!=26){
        cout<<"not pangram";
         }
    else{
             cout<<"string is pangram";
         }
    }
    
