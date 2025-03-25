#include <bits/stdc++.h>
using namespace std;

bool validbrackets(string s){
    stack<char>stk;

    for(int i=0; i<s.size();++i)
    {
   stk.push(s[i]);
    } 
 
    
    int count1=0,count2=0,count3=0;
    while(!stk.empty()){
      if(stk.top()=="]"){
        count1++;
        stk.pop();
      }
      else if(stk.top()=="}"){
        count2++;
        stk.pop();

      }
      else if(stk.top()==")"){
        count3++;
        stk.pop();

      }
      else if(stk.top()=="["){
        count1--;
        stk.pop();

      }
      else if(stk.top()=="{"){
        count2--;
        stk.pop();

      }
      else if(stk.top()=="("){
        count3--;
        stk.pop();

      }
      else{
          stk.pop();
      }

    }
    if(count1==count2 && count2==count3 && count3==0){
        return true;
    }
   

    for(int i=0; i<s.size();++i)
    {
     if(s[i]=='{' || s[i]=='[' || s[i]=='('){
      stk.push(s[i]);
     }
     else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
      continue;
     }

    else{
    while(!stk.empty()){
      if(stk.top()==s[i]){
        stk.pop();
      }
      else {
        return false;
      }
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
