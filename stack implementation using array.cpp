#include <bits/stdc++.h>
using namespace std;
template<typename t>

class stackc{
    int n=5;
    t a[n];
    int top=-1;

    public:
    void push(t x){
        top++;
        a[top]=x;
    }
    void pop(){
        top--;
       
    }
    t top_(){
        return a[top];
    }
    bool empty(){
        return a.size()==0;
    }
} ;

int main(){
    stackc<string>s;
    s.push("asd");
    s.push("aud");
    s.push("agd");
    if(!s.empty()){
       cout<<s.top_();
        s.pop();
    }


}