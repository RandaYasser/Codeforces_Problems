#include <bits/stdc++.h>
#include<algorithm>
using namespace std;


int main() {
    int n;int cnt=1, l=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    int maxl=l;
    sort(arr,arr+n);
    for(int i=1;i<n;i++){

        if(arr[i]==arr[i-1]){
            l++;
        }
        else{
                if(l>maxl){
                    maxl=l;
                }
              l=1;
            cnt++;
        }
    }
    if(l>maxl){
                    maxl=l;}
    if(l==n){    cout<<l<<" "<<cnt;
}
   else{ cout<<maxl<<" "<<cnt;}
   return 0;
}
