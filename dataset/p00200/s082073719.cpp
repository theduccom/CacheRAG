#include <iostream>
using namespace std;

#define STAT_MAX 100
#define LINE_MAX 3000

int main(){
	
	int n;
	int p,q,r;

	int i,j;
	bool flg;

	int statNum;
	int stat[STAT_MAX];
	
	int lineNum;
	int lineTo[LINE_MAX][2];
	int lineCost[LINE_MAX][2];

	while(1){
		//???????????±
		cin>>lineNum>>statNum;if(!lineNum && !statNum) break;
		for(i=0;i<lineNum;i++){
			cin>>lineTo[i][0]>>lineTo[i][1]>>lineCost[i][0]>>lineCost[i][1];
			lineTo[i][0]--;lineTo[i][1]--;
		}

		//???????????????
		cin>>n;
		while(n--){
			cin>>p>>q>>r;
			p--;q--;
			for(i=0;i<statNum;i++) stat[i]=1000*STAT_MAX;
			stat[p]=0;

			do{
				flg=false;
				for(i=0;i<lineNum;i++){
					for(j=0;j<2;j++){
						if(stat[lineTo[i][1-j]]+lineCost[i][r]<stat[lineTo[i][j]]){
							stat[lineTo[i][j]]=stat[lineTo[i][1-j]]+lineCost[i][r];
							flg=true;
						}
					}
				}
			}while(flg);

			cout<<stat[q]<<endl;
		}
	}

	return 0;
}