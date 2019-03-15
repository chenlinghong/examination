#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string a;
		cin>>a;
		vector<char> res;
		int len = a.length(), res_i = 0;
		for(int i=0;i<len;){
			if(i+1>=len){
				res.push_back(a[i]);
				res_i++;
				break;
			}
			if(a[i+1]!=a[i]){
				res.push_back(a[i]);
				i++, res_i++;
			} else{
				// aaa 
				for(;i+2<len;i++){
					if(a[i+2]!=a[i+1]){
						break;
					}
				}
				res.push_back(a[i]);
				res.push_back(a[i+1]);
				res_i+=2;
				// aabb
				for(i+=2;i+1<len;i++){
					if(a[i]!=a[i+1]){
						break;
					}
				}
			}
		}
		for(int i=0;i<res_i;i++){
			cout<<res[i];
		}
		cout<<endl; 
	}
	return 0;
} 
