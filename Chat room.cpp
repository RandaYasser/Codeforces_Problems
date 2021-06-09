#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
string s;string w="hello"; 
int lastpos=0,pos;
cin>>s;
if(s.length()<5){
	cout<<"NO"; return 0;}
	else{
		for(int i=0;i<w.length();i++){
			pos=s.find(w[i]);
			if(pos!=-1){
				s.erase(0,pos+1);
				
			}
			else{
				cout<<"NO";
				return 0;
			}
			lastpos=pos;
			
		}
		cout<<"YES";
	}
	return 0;
}