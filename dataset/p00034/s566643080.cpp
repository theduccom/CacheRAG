#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int dis[10],v1,v2;
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d"
		,&dis[0],&dis[1],&dis[2],&dis[3],&dis[4],&dis[5],&dis[6],&dis[7],&dis[8],&dis[9],&v1,&v2)!=EOF){
			int sum=0;
			for(int i=0;i<10;i++)sum+=dis[i];
			double col=(double)sum*(double)v1/(double)(v1+v2);
			//cout<<"col:"<<col<<endl;
			sum=0;
			for(int i=0;i<10;i++){
				sum+=dis[i];
				if((double)sum-col>=-0.000000001){sum=i;break;}
			}
			cout<<sum+1<<endl;
	}
	return 0;
}