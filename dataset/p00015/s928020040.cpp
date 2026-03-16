
#include <iostream>
#include <string>
#include <vector>
#include <utility> 
#include <tuple>
#include <algorithm>
#include <map>
#include <math.h>
using namespace std;


int main() {
int n;
cin>>n;
for(int y=0;y<n;y++){
string s,t;
cin>>s>>t;
	int ls=s.size(),lt=t.size();
if(ls>80||lt>80) cout<<"overflow"<<endl;
else{
	if(ls>lt){
		int r=ls-lt;
		while(r>0){
			t="0"+t;
		r=r-1;
		}
	}
	if(lt>ls){
		int r=-ls+lt;
		while(r>0){
			s="0"+s;
		r=r-1;
		}
	}
	
	int l=s.size();
	int q=0;
	string ans="";
	for(int k=0;k<l;k++){
		int w=t[l-k-1]-'0'+s[l-k-1]-'0';
		w=w+q;
//		cout<<w<<endl;
		char z='0'+w%10;
		ans=z+ans;
		q=w/10;
	}
	if(q==1) ans='1'+ans;
	if(q>0 && l==80)cout<<"overflow"<<endl;
	else 	cout<<ans<<endl;
	

}
	
	


}
	return 0;
}