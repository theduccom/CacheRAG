#include<iostream>
#include<cstdio>
using namespace std;
bool SOSU[1000001];
bool ARU[1000001];
void solve(){
	SOSU[0]=true,SOSU[1]=true;
	for(int i=2;i<1000001;i++){
		if(SOSU[i]==false){
			for(int j=2;i*j<1000001;j++){
				SOSU[i*j]=true;
			}
		}
	}
}
int main(){
	fill(SOSU,SOSU+1000000,false);
	solve();
	int n,x,sum,a[30];
	while(1){
	fill(ARU,ARU+1000000,false);
	cin >> n >> x;
	if(n==0&&x==0)break;
	sum=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	ARU[0]=true;
	for(int i=0;i<=x;i++){
		if(ARU[i]==true){
				for(int j=0;j<n;j++){
					if(i+a[j]<=x)
					ARU[i+a[j]]=true;
				}
		}
	}
	int flg=0;
	for(int i=x;i>=1;i--){
		if(ARU[i]==true && SOSU[i]==false){
			cout  << i << endl;
			flg=1;
			break;
		}
	}
	if(flg==0)printf("NA\n");
}
}