#include <bits/stdc++.h>
using namespace std;


int main() {
int n,v,num_p;int cnt=0;
cin>>n>>v;
int arr[n];
for(int i=0;i<n;++i){
   cin>> num_p ;
   arr[i]=0;
   int ar[num_p];
   for(int j=0;j<num_p;++j){
    cin>>ar[j];
   }
   sort(ar,ar+num_p);
    if(ar[0]<v){
        cnt++;
        arr[i]=i+1;
         }

}
cout<<cnt<<"\n";
if (cnt!=0){
    for(int i=0;i<n;++i){
    if(arr[i]!=0){
    cout<<arr[i]<<" ";}
}

}
            return 0;
}
