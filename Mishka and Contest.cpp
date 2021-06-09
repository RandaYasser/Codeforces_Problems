#include <bits/stdc++.h>
using namespace std;

int main() {
int n,k,cnt=0;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
int i=0;
while(arr[i]<=k && i!=n) {
	cnt++;
	i++;
}
if(cnt==n){cout<<cnt; return 0;}
i=0;
while(arr[n-i-1]<=k && i!=n) {
	cnt++;
	i++;
}
cout<<cnt;
return 0;
}