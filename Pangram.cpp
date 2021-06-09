#include <bits/stdc++.h>
using namespace std;

int main() {
string alpha="abcdefghijklmnopqrstuvwxyz";
string s;int n,pos;
cin>>n>>s;
if(n<26){
	cout<<"NO";
	return 0;
}

for(int i=0 ;i<n;i++){
	s[i]=tolower(s[i]);
	pos=alpha.find(s[i]);
	//cout<<pos<<" "<<alpha.length()<<endl;

	if(pos!=-1){
	alpha.erase(pos,1);}
	else{continue;}
	
}
if( alpha.length() == 0){ cout<<"YES" ; }
else{cout<<"NO";}

return 0;
}