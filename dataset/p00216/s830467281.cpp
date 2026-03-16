#include<bits/stdc++.h>
using namespace std;
int W;
int main()
{
	while(true){
		scanf("%d",&W);
		if(W==-1)break;
		int cost=1150;
		if(W>=10){
			cost+=125*min(10,W-10);
		}
		if(W>=20){
			cost+=140*min(10,W-20);
		}
		if(W>=30){
			cost+=160*(W-30);
		}
		printf("%d\n",4280-cost);
	}
	return 0;
}