#include <iostream>
#include <string>
#include <typeinfo>
#include <sstream>
using namespace std;
int main()
{
    int n;
	cin>>n;
	string a,b;
	while(n--){
		int s,keta=0;
		cin>>a>>b;
		int ai[85]={},bi[85]={},sum[85]={};
		int as,bs;
		char c;
		as=a.size();
		bs=b.size();
		if(as>80||bs>80){
			cout<<"overflow"<<endl;
		}else{
			for(int i=0;i<as;i++){c=a[as-i-1];ai[i]=c-'0';}
			for(int i=0;i<bs;i++){c=b[bs-i-1];bi[i]=c-'0';}
			for(int i=0;i<=max(as,bs);i++){
				s=ai[i]+bi[i]+sum[i];
				if(s)keta=i;
				if(s>9){
					sum[i]=s%10;
					sum[i+1]++;
				}else{
					sum[i]=s;
				}
			}
			if(sum[80]){
				cout<<"overflow"<<endl;
			}else{
				for(int i=keta;i>=0;i--){
					cout<<sum[i];
				}
				cout<<endl;
			}

		}
	}
    return 0;
}