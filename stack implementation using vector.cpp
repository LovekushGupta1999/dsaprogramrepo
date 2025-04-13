#include <bits/stdc++.h>
using namespace std;
template<typename t>

class stackc{
    vector<t>v;
    public:
    void push(t x){
        v.push_back(x);
    }
    void pop(){
        v.pop_back();
    }
    t top(){
        return v[v.size()-1];
    }
    bool empty(){
        return v.size()==0;
    }
} ;

int main(){
    stackc<string>s;
    s.push("asd");
    s.push("aud");
    s.push("agd");
    if(!s.empty()){
        s.top();
        s.pop();
    }


}