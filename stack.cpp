#include <bits/stdc++.h>
using namespace std;

bool validbrackets(){
    stack<string>stk;
    stk.push("(");
    stk.push("[");
    stk.push("{");
    stk.push("A");
    stk.push("}");
    stk.push("S");
    stk.push("R");
    stk.push("]");
    stk.push("kush");
    stk.push(")");
    
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
    return false;
}

int main() {

if(validbrackets()){
    cout<<" valid ";
}
else{
    cout<<"Not valid";
};

}
