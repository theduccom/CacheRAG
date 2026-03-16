#include<map>
#include<queue>
#include<cstdio>
#include<algorithm>

#define	mp		make_pair
#define	stat	first
#define	step	second

using namespace std;

typedef	pair<int,int>	pii;

void swp(int &stat,int i,int j)
{
	static int pw[]={1,10,100,1000,10000,100000,1000000,10000000};
	int ith=(stat/pw[7-i])%10,jth=(stat/pw[7-j])%10;
	stat=stat-ith*pw[7-i]-jth*pw[7-j]+jth*pw[7-i]+ith*pw[7-j];
}

int main()
{
	static int memo[40321],pos0[40321];
	for(int i=0;i<=40320;i++)	memo[i]=-1;

	map<int,int> index;
	int stat[]={0,1,2,3,4,5,6,7},i=0;
	do{
		int a=0;
		for(int j=0;j<8;j++)	a=10*a+stat[j];
		index[a]=i;
		for(int j=0;j<8;j++)	if(stat[j]==0)	pos0[i]=j;
		i++;
	}while(next_permutation(stat,stat+8));

	queue<pii> qu;
	qu.push(mp(1234567,0));
	while(!qu.empty()){
		pii a=qu.front();	qu.pop();

		int idx=index[a.stat];
		if(memo[idx]!=-1)	continue;
		memo[idx]=a.step;

		int p0=pos0[idx];
		swp(a.stat,p0,(p0+4)%8),qu.push(mp(a.stat,a.step+1)),swp(a.stat,p0,(p0+4)%8);
		if(p0!=0 && p0!=4)
			swp(a.stat,p0,p0-1),qu.push(mp(a.stat,a.step+1)),swp(a.stat,p0,p0-1);
		if(p0!=3 && p0!=7)
			swp(a.stat,p0,p0+1),qu.push(mp(a.stat,a.step+1)),swp(a.stat,p0,p0+1);
	}

	while(1){
		for(int i=0;i<8;i++)	if(!~scanf("%d",stat+i))	return 0;
		int a=0;
		for(int i=0;i<8;i++)	a=10*a+stat[i];
		printf("%d\n",memo[index[a]]);
	}
}