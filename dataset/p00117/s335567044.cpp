#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int cityNum,roadNum;
	int city[20];
	int road[190][2];
	int roadCost[190][2];	//0:0-1 1:1-0

	int i,j;
	int start,goal,money,hashira;
	bool flg;

	cin>>cityNum>>roadNum;
	for(i=0;i<roadNum;i++){
		scanf("%d,%d,%d,%d",&road[i][0],&road[i][1],&roadCost[i][0],&roadCost[i][1]);
		road[i][0]--;road[i][1]--;
	}
	
	scanf("%d,%d,%d,%d",&start,&goal,&money,&hashira);
	start--;goal--;
	
	
	for(i=0;i<cityNum;i++) city[i]=1000000;
	city[start]=0;
	do{
		flg=false;
		for(i=0;i<roadNum;i++){
			for(j=0;j<2;j++){
				if(city[road[i][j]]+roadCost[i][j]<city[road[i][1-j]]){
					city[road[i][1-j]]=city[road[i][j]]+roadCost[i][j];
					flg=true;
				}
			}
		}
	}while(flg);
	hashira+=city[goal];
	
	for(i=0;i<cityNum;i++) city[i]=1000000;
	city[goal]=0;
	do{
		flg=false;
		for(i=0;i<roadNum;i++){
			for(j=0;j<2;j++){
				if(city[road[i][j]]+roadCost[i][j]<city[road[i][1-j]]){
					city[road[i][1-j]]=city[road[i][j]]+roadCost[i][j];
					flg=true;
				}
			}
		}
	}while(flg);
	hashira+=city[start];
	
	cout<<money-hashira<<endl;
	
	return 0;
}