#include<iostream>
#include<string>
using namespace std;
long long a[5000];
bool check[5000];
int main(){
	int n;
	while(true){
	cin>>n;
	if(n==0)
		break;
	for(int i=0;i<5000;i++){
		a[i]=0;
		check[i]=true;
	}
	bool na=true;
	long long b,c,d;
	for(int i=0;i<n;i++){
		cin>>b>>c>>d;
		a[b]+=c*d;
		if(a[b]>=1000000&&check[b]==true){
			check[b]=false;
			na=false;
			cout<<b<<endl;
		}
	}
	if(na==true)
		cout<<"NA"<<endl;
	}
	return 0;
}