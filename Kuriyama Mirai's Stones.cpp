#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	int n;long long sum=0,x;
	cin>>n;
	long long  v1[n];
	long long  v2[n];
	long long  v[n];

	for(int i=0;i<n;i++){
		cin>>x;
		sum+=x;
    v[i]=x;
    v1[i]=sum;
    //cout<<v[i]<<" "<<v1[i]<<" ";
    
	}
	//cout<<endl;
	sort(v,v+n);
	sum=0;
		for(int i=0;i<n;i++){
		sum+=v[i];
		v2[i]=sum;
}
	cin>>x;
	while(x--){
		int t,l,r;
		cin>>t>>l>>r;
		if(t==1){
		   if(l==1)
		   cout<<v1[r-1]<<endl;
		   else
			cout<<v1[r-1]-v1[l-2]<<endl;
		}
		
		else{
		   if(l==1)
		   cout<<v2[r-1]<<endl;
		   else
			cout<<v2[r-1]-v2[l-2]<<endl;
		}

	}
		

return 0;
}