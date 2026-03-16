#include<iostream>
#include <algorithm>
#include<functional>//greaterの使用
using namespace std;
#define MAX_LIST 60000


bool find_list(int *list,int a,int b,int x){
	if(b-a<2){
		if(list[b]==x){
			return true;
		}
		if(find(list+a,list+b,x)!=list+b){
			return true;
		}
		return false;
	}
	if(list[(b+a)/2]>x){
		return find_list(list,a,(b+a)/2,x);
	}else if(list[(a+b)/2]<x){
		return find_list(list,(a+b)/2,b,x);
	}
	return true;
}

int main(){
	bool prime[MAX_LIST];
	for(int i=0;i<MAX_LIST;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=0;i*i<MAX_LIST;i++){
		if(prime[i]==1){
			for(int j=i*2;j<MAX_LIST;j=j+i){
				prime[j]=0;
			}
		}
	}
	int primelist[60000];
	int j=0;
	for(int i=0;i<MAX_LIST;i++){
		if(prime[i]==1){
			primelist[j]=i;
			j++;
			if(j>60000){
				break;
			}
		}
	}
	int in;
	while(cin>>in,in){
		int ans=0;
		for(int i=0;primelist[i]*2<=in;i++){
			if(prime[in-primelist[i]]==1){
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}