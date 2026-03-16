#include<iostream>
#include<cstdio>
using namespace std;
char w[8][8];
int dx[]={0,0,1,-1},dy[]={1,-1,0,0},s[8][8],q[4];
//ツ湘」ツ、ツ可コツ、ツ右ツ、ツ債カ
void func(int y,int x){
	s[y][x]=0;
	for(int i=0;i<4;i++)
	if(y+dy[i]>=0&&y+dy[i]<8&&x+dx[i]>=0&&x+dx[i]<8)
	if(s[y+dy[i]][x+dx[i]]==1){
		
		q[i]++;
		func(y+dy[i],x+dx[i]);
	}
}
int main(){
	while(scanf("%s",w[0])!=EOF){
		for(int i=1;i<8;i++)
			scanf("%s",w[i]);
		for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
		s[i][j]=w[i][j]-'0';
		
		for(int i=0;i<4;i++)
			q[i]=0;
		for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
		if(s[i][j]==1)
		func(i,j);
		if(q[0]==1&&q[1]==1&&q[2]==1)
	cout<<'A'<<endl;
else if(q[0]==3)
	cout<<'B'<<endl;
else if(q[2]==3)
	cout<<'C'<<endl;
else if(q[0]==2&&q[3]==1)
	cout<<'D'<<endl;
else if(q[0]==1&&q[2]==2)
	cout<<'E'<<endl;
else if(q[0]==2&&q[2]==1)
	cout<<'F'<<endl;
else if(q[0]==1&&q[2]==1&&q[3]==1)
	cout<<'G'<<endl;
		
		
	}
	return 0;
}