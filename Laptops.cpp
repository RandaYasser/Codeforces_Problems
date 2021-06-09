#include <bits/stdc++.h>
#include<algorithm>
using namespace std;


int main() {
vector<pair<int,int> > laps;
int n,x,y;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x>>y;
    laps.push_back(pair<int,int>(x,y));

}
sort(laps.begin(),laps.end());
  y=laps[0].second;
for(int j=1;j<laps.size();j++){
    if(y>laps[j].second){
        cout<<"Happy Alex";
        goto A;
    }
    y=laps[j].second;

}
cout<<"Poor Alex";

        A:    return 0;
}
