#include <bits/stdc++.h>
using namespace std;

int main() {
	int cnti=0,cntj=0,cnt=0;
	char a[8][8];

	for (int i=0; i<8;i++){
			 	if(cnti==8) {
			 		cnt++;
			 		 		//	cout<<cnt<<endl;
	
			 	}
                cnti=0;
		for(int j=0;j<8;j++){
		  cin>>a[i][j];
			if(a[i][j]=='B') cnti++;
				//cout<<cnti;
		}
	}
	if(cnti==8) {
			 		cnt++;}
	if(cnt==8){
		cout<<cnt;
		return 0;
	}
		//	cout<<cnt;

	 for (int j=0; j<8;j++){
	 	if(cntj==8){
	 		cnt++;
	 		

	 	} cntj=0;
		for(int i=0;i<8;i++){	

			if(a[i][j]=='B'){
		    	cntj++;
		    
			} 
		}
	}
	if(cntj==8){
	 		cnt++;}
	cout<<cnt;
	return 0;
}