#include <bits/stdc++.h>


using namespace std;


int main() {
 long long k,ones=0,cnt=0;
 string s;
 long long arr[1000001]={0};
 arr[0]=1;
 cin>>k>>s;
 if(k>s.size()){
     cout<<0;
     return 0;}
 for(int i=0;i<s.size(); i++){

     if(s[i]-'0'==1){
         ones++;
     }
        // i++;
     if(ones>=k)
         cnt+=arr[ones-k];
     arr[ones]++;

    // cout<<arr[ones];


 }

  cout<<cnt;


    return 0;

}
