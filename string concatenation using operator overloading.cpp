#include <bits/stdc++.h>
using namespace std;
 class StringClass{
     public:string  str;
     StringClass(string s):str(s){} 
     
     StringClass operator +(StringClass &obj){
        StringClass str1=str+obj.str;
        return str1;
     }
 };
int main() {
	StringClass s1("hello"),s2("world");
	StringClass s3=s1+s2;
	cout<<s3.str;

}
