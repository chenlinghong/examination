#include <iostream>
using namespace std;
int main(){
	int data;
	cin>>data;
	int res = 0, tmp = 1024-data;
	res += tmp/64, tmp%=64;
	res+=tmp/16, tmp%=16;
	res+=tmp/4, tmp%=4;
	res+=tmp;
	cout<<res<<endl;
	return 0;
} 
