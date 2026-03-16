#include<cstdio>
#include<iostream>
#include<algorithm>
#include<list>
#define MAX(x,y) ((x>y)? x:y)

using namespace std;

FILE *wfp=fopen("output.txt","w");
FILE *rfp=fopen("input.txt","r");

int W;
int N;

int kati[10000];
int omosa[10000];

int DP[1005][10005];//[i][j]i番目までにjより小さくなるような価値
int DP_W[10005];//そのときの重さ

int CASE=0;
int main()
{
	wfp=stdout;
	rfp=stdin;
	while(true)
	{
		CASE++;
		fill(DP_W,DP_W+10005,0);
		for(int i=0;i<10000;i++)DP[0][i]=0;
		for(int i=0;i<1000;i++)DP[i][0]=0;
		fscanf(rfp,"%d",&W);
		if(W==0)break;
		fscanf(rfp,"%d",&N);
		for(int i=0;i<N;i++)
		{
			fscanf(rfp,"%d,%d",&kati[i],&omosa[i]);
		}
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<W;j++)
			{
				if(j+1-omosa[i]>=0)DP[i+1][j+1]=MAX(DP[i][j+1],DP[i][j+1-omosa[i]]+kati[i]);
				else DP[i+1][j+1]=DP[i][j+1];
			}
		}
		DP_W[0]=0;
		for(int i=1;i<=W;i++)
		{
			if(DP[N][i]==DP[N][i-1])DP_W[i]=DP_W[i-1];
			else DP_W[i]=i;
		}


		fprintf(wfp,"Case %d:\n",CASE);
		fprintf(wfp,"%d\n",DP[N][W]);
		fprintf(wfp,"%d\n",DP_W[W]);
	}
	fclose(rfp);
	fclose(wfp);
	return 0;
}