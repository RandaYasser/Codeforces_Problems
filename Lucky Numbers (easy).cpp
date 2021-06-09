#include <bits/stdc++.h>


using namespace std;
long long n;
set<long long> lucky;

void islucky(long long N){
    int nf=0,ns=0;
    long long temp=N;
    while(N>1) {
        if (N % 10 == 4)nf++;
        if (N % 10 == 7)ns++;
        N /= 10;
    }
    if(nf==ns){
        lucky.insert(temp);

    }
    return;

}
void genlucky (long long x=0){
    islucky(x);
    if(x>n*100)return;
    genlucky(x*10+4);
    genlucky(x*10+7);



}
int main() {

 cin>>n;
 genlucky();
    //for(auto s:lucky)
   //  cout<<s<<" ";
 cout<<*lucky.lower_bound(n);



    return 0;

}
