#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,base[4],pt,now;
	cin>>n;
	string s;
	while(n-->0){
		pt=0;
		for(int i=0;i<3;i++)
			base[i]=0;
		for(now=3;now>0;){
			getline(cin,s);
			if(s=="HIT"){
				if(base[2]==1)
					pt++;
				for(int i=2;i>0;i--)
					base[i]=base[i-1];
				base[0]=1;
			}
			else if(s=="HOMERUN"){
				for(int i=0;i<3;i++){
					if(base[i]==1)
						pt++;
					base[i]=0;
				}
				pt++;
			}
			else if(s=="OUT"){
				now--;
			}
		}
		cout<<pt<<endl;
	}
	return 0;
}