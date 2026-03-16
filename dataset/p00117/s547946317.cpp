#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int n,go_min = 100000000,back_min = 100000000,Table[21][21];

void func(int sum,int current,int goal,bool FLG,int checkTable[21]){
	if(current == goal){
		if(FLG){
			go_min = min(go_min,sum);
		}else{
			back_min = min(back_min,sum);
		}
		return;
	}

	for(int i=1; i <= n; i++){
		if(Table[current][i] != -1 && checkTable[i] == 0){
			int newCheckTable[21];
			for(int k=0; k < 21; k++)newCheckTable[k] = checkTable[k];
			newCheckTable[i] = 1;
			func(sum+Table[current][i],i,goal,FLG,newCheckTable);
		}
	}

}


int main(){

	int m,a,b,c,d,start,end,V,P,checkTable[21];
	scanf("%d",&n);

	for(int i=0; i < 21; i++){
		checkTable[i] = 0;
		for(int k=0; k < 21; k++){
			Table[i][k] = -1;
		}
	}

	scanf("%d",&m);

	for(int i=0; i < m; i++){
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		Table[a][b] = c;
		Table[b][a] = d;
	}

	scanf("%d,%d,%d,%d",&start,&end,&V,&P);

	func(0,start,end,true,checkTable);
	func(0,end,start,false,checkTable);

	printf("%d\n",V-(P+go_min+back_min));

	return 0;
}