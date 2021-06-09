#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

template <typename A, typename B>
vector<pair<B, A> > flip_map(map<A,B> & src) {

    vector<pair <B,A> > dst;

    for(typename map<A, B>::const_iterator it = src.begin(); it != src.end(); ++it)
        dst.push_back(pair<B, A>(-(it -> second), it -> first));
sort(dst.begin(),dst.end());

    return dst;
}
int main() {
  string hero,action,trash,p1,p2;int n,sz;
  cin>>hero;
  cin>>n;
  map<string,int> pwall;
  while(n--){
        cin>>p1>>action;
  if(action=="posted"){
    cin>>trash>>p2;
    cin.ignore(1000,'\n');
    sz=p2.size();
    p2.resize(sz-2);
    if(p1!=hero&&p2==hero){
    pwall[p1]+=15;
    }
    else if(p2!=hero&&p1==hero){
    pwall[p2]+=15;
    }
     else{
        pwall[p1]+=0;
        pwall[p2]+=0;
    }

  }
  else if(action=="commented"){
    cin>>trash>>p2;
    cin.ignore(1000,'\n');
    sz=p2.size();
    p2.resize(sz-2);
    if(p1!=hero&&p2==hero){
    pwall[p1]+=10;
    }
    else if(p2!=hero&&p1==hero){
    pwall[p2]+=10;
    }
    else{
        pwall[p1]+=0;
        pwall[p2]+=0;
    }

  }
  else{
    cin>>p2;
    cin.ignore(1000,'\n');
    sz=p2.size();
    p2.resize(sz-2);
    if(p1!=hero&&p2==hero){
    pwall[p1]+=5;
    }
    else if(p2!=hero&&p1==hero){
    pwall[p2]+=5;
    }
    else{        pwall[p2]+=0;

        pwall[p1]+=0;
    }
  }
  }
      vector<pair<int, string> >ord_pwall = flip_map(pwall);
for(vector<pair<int, string> >::iterator it = ord_pwall.begin(); it != ord_pwall.end(); ++it){


        cout << it -> second << endl;}





   return 0;
}
