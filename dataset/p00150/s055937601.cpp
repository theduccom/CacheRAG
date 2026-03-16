#include<iostream>
#include<string>
#include<queue>
#include<utility>
#include<algorithm>
#include<cctype>
using namespace std;


bool judge(int n){
	for(int i=2;i*i<=n;i++)
		if(n%i==0)return false;
	return true;
}

int main(){
	int n;
	while(cin >> n, n != 0){
		for(int i=n;i>0;i--){
			if(judge(i)&&judge(i-2)){
				cout<<i-2<<" "<<i<<endl;
				break;
			}
		}
	}
	return 0;
}













/*#include<iostream>
#include<string>
#include<queue>
#include<utility>
#include<algorithm>
#include<cctype>
using namespace std;

int so[10010];
int set[10010];//入力

int main(){
	int x=0;
	while(1){
	cin>>set[x];
			if(set[x]==0)break;
		x++;
	}
	
	for(int y=0;y<x;y++){
	
	
	int num[10000];
	for(int i=0;i<set[y];i++){
	num[i]=1;
	}
	
	
	for(int i=2;i<set[y];i++){
		if(num[i]==1){
			for(int j=0;i*(j+2)<set[y];j++){
			num[i*(j+2)]=0;
			}
		}
	}
	for(int i=2;i<set[y];i++){
		if(num[i]){
		so[i]=i;
		}
	}
	
	sort(so, so+set[y],greater<int>() );

	for(int i=0;i<set[y];i++){
		if(so[i]-so[i+1]==2){
		cout<<so[i+1]<<" "<<so[i]<<endl;
			break;
		}
	}
	
	}


}*/
/*
#include<iostream>
#include<string>
#include<queue>
#include<utility>
#include<algorithm>
#include<cctype>
using namespace std;

int so[10010];
int set[10010];

int main(){
	
	while(1){
	int n;
		cin>>n;
		if(n==0)break;
		
	
	

	int num[10000];
	for(int i=0;i<n;i++){
	num[i]=1;
	}
	
	
	for(int i=2;i<n;i++){
		if(num[i]==1){
			for(int j=0;i*(j+2)<n;j++){
			num[i*(j+2)]=0;
			}
		}
	}
	for(int i=2;i<n;i++){
		if(num[i]){
		so[i]=i;
		}
	}
	
	sort(so, so+n,greater<int>() );

	for(int i=0;i<n;i++){
		if(so[i]-so[i+1]==2){
		cout<<so[i+1]<<" "<<so[i]<<endl;
			break;
		}
	}
	
}


}*/
