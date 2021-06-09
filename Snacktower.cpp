#include <bits/stdc++.h>
#include<algorithm>
using namespace std;


int main() {
   int n,next,x;
   cin>>n;
    priority_queue<int> snk;
   next=n;

   for(int i=0;i<n ;i++){
        cin>>x;
snk.push(x);
        while(snk.top()==next&&!snk.empty()){
        cout<<snk.top()<<" ";
        snk.pop();
         next--;
   }
   cout<<endl;

   }

   return 0;
}
