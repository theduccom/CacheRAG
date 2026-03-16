#include<iostream>
#include <cmath>
#include <algorithm>
#include<cstdio>
using namespace std;

int main(){
	int ary[20]={};
	int spd[2]={};
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&ary[1],&ary[2],&ary[3],&ary[4],&ary[5],&ary[6],&ary[7],&ary[8],&ary[9],&ary[10],&spd[0],&spd[1])!=EOF){
		for(int i=2;i<=10;i++){
			ary[i]+=ary[i-1];
		}

		double piy=(double)(ary[10]*spd[0])/(double)(spd[0]+spd[1]);
		int hog=ceil(piy);
		int res;
		for(int i=0;i<=10;i++){
			if(hog<=ary[i]){
				res=i;
				break;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}