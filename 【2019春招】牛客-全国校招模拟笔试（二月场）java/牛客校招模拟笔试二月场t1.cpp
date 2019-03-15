#include <bits/stdc++.h>
using namespace std;
int main(){
	long long x,f,d,p;
	cin>>x>>f>>d>>p;
	if(f>=d/x){
		cout<<d/x<<endl;
	}else {
		long long res = f;
		d -= x*f;
		res += d/(x+p);
		cout<<res<<endl;
	}
	return 0;
}
// AC
