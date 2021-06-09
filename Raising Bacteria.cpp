#include <iostream>
using namespace std;

int main() {
string s; cin>> s;int c=0;
int n =s.size();
for(int i=0;i<n;i++){
	if(s[i]!='a')
{	c++;}
}
int a=n-c;
if(a>c){
	cout<<n;
}
else if (c==a){cout<<n-1;}
else{cout<<n-(c-a+1);}

return 0;
}