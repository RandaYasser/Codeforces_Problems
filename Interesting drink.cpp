#include <bits/stdc++.h>
 
 
using namespace std;
 
 
int main(){
  int n, m;
  cin>>n;
  int arr[n];
  for(int i=0; i<n;i++){
      cin>>arr[i];
  }
  sort(arr,arr+n);
  cin>>m;
  long long k;
  while(m--){
      cin>>k;
      if(k<arr[0]){
          cout<<0<<endl;
      }
      else {
          int i = upper_bound(arr, arr + n, k) - arr;
 
          cout << i << endl;
 
      }
 
  }
 
    return 0;
 
}