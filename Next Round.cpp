#include <bits/stdc++.h>
using namespace std;

int main() {
int n, k;int cnt=0; 
cin>>n>>k;
int arr[n];
for(int i =0 ; i<n;i++){
	cin>>arr[i];
	} 
	int s=arr[k-1];
	for(int i =0 ; i<n;i++){
       if(arr[i]>=s&&arr[i]>0){
       	cnt++;
       }}
       cout<<cnt;
	return 0;
}