#include <bits/stdc++.h>
using namespace std;


int main() {
 int s=0,d=0,t=0;
 int n,x;
 cin>>n;
 deque <int> deq;
 for(int i=0;i<n;i++){
    cin>>x;
    deq.push_back(x);
 }
 while(t<n){
        if(t%2==0){
    if(deq.front()>=deq.back()){
        s+=deq.front();
       deq.pop_front();
    }
    else{
        s+=deq.back();
        deq.pop_back();
    }}
    else {
    if(deq.front()>=deq.back()){
        d+=deq.front();
       deq.pop_front();
    }
    else{
        d+=deq.back();
        deq.pop_back();
    }
 }    t++;
}
 cout<<s<<" "<<d;
	return 0;
}
