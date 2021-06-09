#include <bits/stdc++.h>
using namespace std;

int main() {
	  string s,sen; int cnt=0;
	  cin>>s;
	  if(s.length()<=3){cout<<s;return 0;}
	  for(int i =0 ;i<s.length()-2; ){
	  	if(s[i]=='W'&&s[i+1]=='U'&& s[i+2]=='B'){
	  		s.erase(i,3);
	  		s.insert(i," ");
	  	}
	  	else{
	  		i++;

	  	}
	  	
	  	
	  }
	  

	  	
	  
	  cout<<s;
	return 0;
}