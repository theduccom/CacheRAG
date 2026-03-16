#include<bits/stdc++.h>
using namespace std;

bool ar[110000]={true};

int prime(int x){
	int sump=0;
	int i=110000;
	
	for(int a=0;a<i;a++){ar[a]=true;}
	
	for(int b=2;b*b<=i;b++){
		if(ar[b]){
			for(int c=b*b;c<=i;c+=b){
				ar[c]=false;
				}
			}
		}

int ca=0;
		for(int d=2;d<=i;d++){
			if(ar[d]){
				sump+=d;
				ca++;
				}
			if(ca==x){break;}	
			}
			return sump;
	}

int main(){
	int s;
	while(cin>>s,s){
		cout<<prime(s)<<endl;
		}
		return 0;
	}