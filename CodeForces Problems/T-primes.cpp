#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int MAX=1000000;


int main() {
	vector<bool> isprime(MAX,1);
    isprime[0]=isprime[1]=0;
    for(int i=2; i*i<MAX; i++)
    {
        if(isprime[i])
        {   
        
            for(int j=i*i; j<MAX; j+=i)
                
                isprime[j]=0;
        }
    }
    
	int n ; long long d, m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		 d=(long long)sqrt(m);
		 if(m%10==0){
		 	cout<<"NO\n";
		 	continue;
		 }
	    if(m==d*d && isprime[d])
		cout<<"YES\n";
		else
		cout<<"NO\n";
			
		
	}
	
	return 0;
}