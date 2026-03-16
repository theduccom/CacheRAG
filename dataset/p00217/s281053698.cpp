#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(true){
		int N;
		int dist[10009];
		for(int i=0;i<10009;i++){
			dist[i]=-1;
		}
		scanf("%d",&N);
		if(N==0)break;
		for(int i=0;i<N;i++){
			int P,D1,D2;
			scanf("%d%d%d",&P,&D1,&D2);P--;
			dist[P]=D1+D2;
		}
		int ma=-1,mai;
		for(int i=0;i<10009;i++){
			if(ma<dist[i]){
				ma=dist[i];
				mai=i;
			}
		}
		printf("%d %d\n",mai+1,ma);
	}
	return 0;
}