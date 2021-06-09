#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,cnt=0;
	double k,x;
	string s;
	cin>>n>>m>>k;
    map <string,int> map; 
    for(int i=0; i<n;i++){
    	cin>>s>>x;
    	x*=k;
    	if(x>=100){
    	if((ceil(x)-x)<0.01){
    		map[s]+=ceil(x);  

    	}
    	else 
    //	cout<<s<<" "<<x<<"\n";

    	map[s]+=x;
    	}
    	
    }
    x=0;
        for(int i=0; i<m;i++){
        cin>>s;
       // find (v.begin(), v.end(), s); 
           	map[s]+=x;

    	//cnt++;
        }
        cout<<map.size()<<endl;
        
	        for (std::map<string, int>::iterator itr = map.begin(); itr != map.end(); itr++)
{
    cout << itr->first << " " <<itr->second<<endl;;
}
 

	return 0;
}