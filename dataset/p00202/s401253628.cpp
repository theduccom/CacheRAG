#include<iostream>
#include<algorithm>
#define INF 999999
typedef long long ll;
using namespace std;
int n,a,b,c,maxm,x;
int sum,miniNo,minim;
bool t[1000001];
bool isPrime(int x){
	for(int i=2;i*i<=x;i++){
		if(x%i==0)return false;
	}
	return true;
}
int main(){
	while(1){
		fill(t,t+1000001,0);
		cin>>n>>x;
		if(n==0)break;
		for(int i=0;i<n;i++){
			cin>>a;
			t[a]=true;
			for(int j=1;j+a<1000001;j++){
				t[j+a]=(t[j]||t[j+a]);
			}
		}
		b=0;
		for(int i=x;i>=1;i--){
			if(isPrime(i)&&t[i]){
				cout<<i<<endl;
				b=1;
				break;
			}
		}
		if(b==0)cout<<"NA"<<endl;
	}
	return 0;
}