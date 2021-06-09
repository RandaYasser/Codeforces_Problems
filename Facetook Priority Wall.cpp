#include <bits/stdc++.h>
#include<algorithm>
using namespace std;


int main() {
   map<string,int> my;
   string s;int n;
   cin>>n;
   while(n--){
    cin>>s;
    my[s]++;
    if(my[s]==1)
        cout<<"OK\n";
    else
        cout<<s<<my[s]-1<<endl;

   }


   return 0;
}
