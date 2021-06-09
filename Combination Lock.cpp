#include <bits/stdc++.h>
using namespace std;

int main() {
int n,d,cnt=0;
string os,es;
cin>>n>>os>>es;//original string , edited string lol
for(int i =0;i<n;i++){
	if((os[i]-'0')>(es[i]-'0')){
		d=(os[i]-'0')-(es[i]-'0');
		if(d<=5)
		cnt+=d;
		else
	
		cnt+=(10-d);


		
	}
	else if((os[i]-'0')<(es[i]-'0')){
	d=(es[i]-'0')-(os[i]-'0');
		if(d<=5)
		cnt+=d;
		else
	
cnt+=(10-d);}
	
}
cout<<cnt;
return 0;
}