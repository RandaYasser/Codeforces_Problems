
 #include <bits/stdc++.h>
using namespace std;
 
 
int main() {
int pos_i,pos_j;int cnt=0;
int arr[5][5];
for(int i=0;i<5;++i){
    for(int j=0;j<5;++j){
        cin>>arr[i][j];
        if(arr[i][j]==1){
           pos_i=i;
           pos_j=j;
        }
    }
}
if(pos_i<=2){
    cnt+=(2-pos_i);
}
else{
    cnt+=(pos_i-2);
 
}
if(pos_j<=2){
    cnt+=(2-pos_j);
}
else{
    cnt+=(pos_j-2);
 
}
cout<<cnt;
 
            return 0;
}