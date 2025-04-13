#include <bits/stdc++.h>
using namespace std;

bool validbrackets(string s){
    stack<char>stk;
    for(int i=0; i<s.size();++i)
    {
     if(s[i]=='{' || s[i]=='[' || s[i]=='('){
      stk.push(s[i]);
     }
     else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
      continue;
     }

    else if(s[i]=='}'){
      if(!stk.empty() && stk.top()=='{'){
        stk.pop();
      }
      else {
        return false;
      }
    }
    else if(s[i]==']'){
      if(!stk.empty() && stk.top()=='['){
        stk.pop();
      }
      else {
        return false;
      }
    }
    else if(s[i]==')'){
      if(!stk.empty() && stk.top()=='('){
        stk.pop();
      }
      else {
        return false;
      }
    }
 }     
 
    }



int main() {
 string s="[{()}]" ;
if(validbrackets(s)){
    cout<<" valid ";
}
else{
    cout<<"Not valid";
};

}
