#include <bits/stdc++.h>
using namespace std;

bool checker(int val,int p,int n){
	int ans=n;
	ans-=val;
	while(val>0){
		ans-=val/p;
		val/=p;
		
	}
	if(ans>0){
		return 0;
	}
	else return 1;
}
int main() {
	int n,k;
	cin>>n>>k;
	int st=1,end=n,mid;
	while(end>st)
	{
		mid=st+(end-st)/2;
	if(checker(mid,k,n)) end=mid;
	else st=mid+1;
//	cout<<mid<<" "<<checker(mid,k,n)<<endl;
	}
	cout<<st;
	
	return 0;
}