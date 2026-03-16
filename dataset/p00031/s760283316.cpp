#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	int a;
	while(cin>>a){
		int w[10]={},j=0;
		while(a){
			rep(i,0,10){
				if(pow(2,i)<=a && a<pow(2,i+1)){
					a-=pow(2,i);
					w[i]++;
				}
			}
		}
		rep(i,0,10){
			if(w[i]){
				if(j==0){
					cout<<pow(2,i);
					j++;
				}else cout<<" "<<pow(2,i);
			}
		}
		cout<<endl;
	}
}