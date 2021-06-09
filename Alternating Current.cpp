#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
   string s;
   cin>>s;
   stack<char> b;
       	b.push(s[0]);

   for(int i=1;i<s.size();++i){
   	if(!b.empty()){
    if(s[i]!=b.top()){ 
    	b.push(s[i]);  }
       else if(s[i]==b.top()) {
    	b.pop();
       }
   }
   else{b.push(s[i]);}
   }
if(b.empty()){
	cout<<"Yes";
}
else{ cout<<"No";}
   return 0;
}