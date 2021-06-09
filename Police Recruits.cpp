#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 int n,x;int cnt=0;int cr=0;
 cin>>n;
 while(n){
    cin>>x;
    cr+=x;
    if(cr<0){
        cnt++;
        cr=0;
    }
    n--;
 }
 cout<<cnt;
	return 0;
}