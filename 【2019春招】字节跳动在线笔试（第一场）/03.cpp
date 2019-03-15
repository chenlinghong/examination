#include <iostream>
using namespace std;
long fun(int x){
	long res = x;
	while(x--){
		res+=x;
	}
	return res;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		int m;
		cin>>m;
		long res = 0;
		int first,first_v,s,s_v,x,x_v,p,p_v,cur,cur_v,flag=1;
		for(int i=0;i<m;){
			cin>>p_v;
			if(i==0){
				p=1;
				cur = 1;
			}
			// ф╫ 
			int t;
			for(i++;i<m;i++){
				cin>>t;
				p++;
				if(t!=p_v){
					res += fun(p) + p*cur;
					break;
				} 
			}
			if(flag==1){
				first=p;
				first_v = p_v;
			}
			flag=0;
			if(t>p_v){
				// ио 
				s=1;
				s_v=t;
				for(i++;i<m;i++){
					cin>>t;
					s++;
					if(t!=s_v){
						res += fun(p) + s*cur;
						break;
					}
				}
			} else{
				// об 
				
			}
		}
		
		
	}
	
	
}
