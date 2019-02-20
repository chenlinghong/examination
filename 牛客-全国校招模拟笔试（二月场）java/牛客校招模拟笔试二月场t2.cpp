#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,a,b,c;
		cin>>n>>a>>b>>c;
		long temp = a/6 + b/3 + c/2;
		a%=6, b%=3, c%=2;
		if(c==1){
			if(b>0 && a>0){
				temp++;
				b-=1, a-=1, c-=1;
			}
		}
		if(b*2 + a>=6){
			temp++;
		}
		if(temp >= n){
			cout<<"Yes"<<endl;
		} else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
// 20% 
