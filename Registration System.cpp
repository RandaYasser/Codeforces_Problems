#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
  int n,cnt=1;
  cin>>n;
  while(n>1){
  if(n%2!=0){ cnt++;
  n--;
  }n/=2;}
  cout<<cnt;
   return 0;
}