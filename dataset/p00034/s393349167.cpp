#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int l[10],v1,v2;
	while(scanf("%d",&l[0])!=EOF){
		int dis=l[0];
		for(int i=1;i<10;i++){
			scanf(",%d",&l[i]);
			dis+=l[i];
		}
		scanf(",%d,%d",&v1,&v2);
		double time=(double)dis/(v1+v2);
		double conf=(double)v1*time;
		double len=0.0;
		for(int i=0;i<10;i++){
			len+=l[i];
			if(len>=conf){
				cout<<i+1<<endl;
				break;
			}
		}
	}
	return 0;
}