#include <bits/stdc++.h>
#include<queue>
using namespace std;

int main() {
	int n,k;string s;int c=0,cnt=0;
	cin>>n>>k;
	string d="0123456789";
	while(n){
	cin>>s;
	for(int i=0;i<=k;i++){
	int j=s.find(d[i]);
	if(j!=-1)
	cnt++;
	}
	if(cnt==k+1)
	c++;
	cnt=0;
	n--;	
	}
	cout<<c;
return 0;
}