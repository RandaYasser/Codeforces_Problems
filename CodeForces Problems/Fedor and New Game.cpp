#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n , m,k,cnt,fr=0,fedo;
	cin>>n>>m>>k;
	int arr[m];
	for(int i=0; i<=m; i++){
		cin>>arr[i];
		
	}
	for (int i=0;i<m;i++){
		fedo=arr[m]^arr[i];
		cnt=0;
		
	
		for(int j=0;j<n;j++){
			if(fedo&(1<<j))
			 cnt++;
			
			}
			if(cnt<=k)fr++;
			//cout<<arr[i];
		
	}
	cout<<fr;
	return 0;
}