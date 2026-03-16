#include<cstdio>

#define	SEA	0
#define	GND	1

using namespace std;

struct P{int x,y;};

P color[13][13];

P UF_root(P p)
{
	if(color[p.y][p.x].x==-1)	return p;
	return p=UF_root(color[p.y][p.x]);
}

bool UF_find(P p,P q)
{
	p=UF_root(p);
	q=UF_root(q);
	return p.x==q.x && p.y==q.y;
}

void UF_union(P p,P q)
{
	p=UF_root(p);
	q=UF_root(q);
	if(p.x!=q.x || p.y!=q.y)	color[q.y][q.x]=p;
}

int main()
{
	int world[13][13];
	for(int i=0;i<13;i++)	world[i][0]=world[0][i]=SEA;

	do{
		for(int i=1;i<13;i++){
			char s[256];
			if(scanf("%s",s)==EOF)	return 0;
			for(int j=1;j<13;j++)	world[i][j]=s[j-1]-'0';
		}

		for(int i=0;i<13;i++)
			for(int j=0;j<13;j++)
				color[i][j].x=-1;

		int dx[]={-1,0},dy[]={0,-1};
		for(int y=1;y<13;y++){
			for(int x=1;x<13;x++){
				for(int k=0;k<2;k++){
					P p={x,y},q={x+dx[k],y+dy[k]};
					if(world[p.y][p.x]==world[q.y][q.x] && !UF_find(p,q))
						UF_union(p,q);
				}
			}
		}

		int cnt=0;
		for(int y=1;y<13;y++)
			for(int x=1;x<13;x++)
				if(world[y][x]==GND && color[y][x].x==-1)	cnt++;
		printf("%d\n",cnt);
	}while(1);

	return 0;
}