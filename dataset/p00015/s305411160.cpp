#include<iostream>
#include<string>
using namespace std;
int main(){
	string a,b;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a.size()>80||b.size()>80)
			cout<<"overflow"<<endl;
		else{
			int t;
			int c[100]={0};
			if(a.size()>=b.size())
				t=a.size();
			if(a.size()<b.size())
				t=b.size();
			for(int j=0;j<t;j++){
				if(j<a.size())
					c[j]+=a[a.size()-j-1]-'0';
				if(j<b.size())
					c[j]+=b[b.size()-j-1]-'0';
				if(c[j]>=10){
					c[j]-=10;
					c[j+1]=1;
				}
			}
			bool h=true;
			if(c[t]==1){
				if(t==80){
					cout<<"overflow"<<endl;
					h=false;
				}
				else
				    cout<<"1";
			}
			if(h==true){
			for(int j=t-1;j>=0;j--)
				cout<<c[j];
			cout<<endl;
			}
		}
	}
	return 0;
}