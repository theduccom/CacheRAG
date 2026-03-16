#include <bits/stdc++.h>
using namespace std;
void add(string & ,string &,string &);
int main() {
	string a,b;
	int al,bl;
	int n;
	cin>>n;
	while(n--){
	        string ans="";
		cin>>a>>b;
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		al=a.size();
		bl=b.size();
		if(bl>al){
			swap(a,b);
			swap(al,bl);
		}
		for(int i=bl;i<al;i++){
			b+='0';
		}
		add(ans,a,b);
		if(ans.size()>80){
		  printf("overflow\n");
		}else{
		  reverse(ans.begin(),ans.end());
		  cout<<ans<<endl;
		}
	  	
	}
	return 0;
}
void add(string &ans,string &a,string &b){
	int x,y=0;
	int i;
	int al=a.size();
	for(i=0;i<al;i++){
		x=a[i]-'0'+b[i]-'0';
		if((x+y)>=10){
		        ans+= ((x+y)%10)+'0';
			y=1;
		}else{
		        ans+= (x+y)+'0';
			y=0;
		}
	}
	if(y==1)ans+='1';
}