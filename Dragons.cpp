#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
int s, n,x,y;
cin>>s>>n;
vector<pair<int ,int> > vec;
for(int i=0;i<n;i++){
	cin>>x>>y;
	    vec.push_back(pair<int,int>(x,y));
}
if(n>1)
sort(vec.begin(),vec.end());
for(int i=0;i<n;i++){

	if(s>vec[i].first){
		s+=vec[i].second;

	}
	else
	{
	 cout<<"NO";
	 return 0;
	}
}
cout<<"YES";
return 0;
}