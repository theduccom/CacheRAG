#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <queue>
#include <stack>
#include <utility>
#include <queue>
#define mp make_pair
#define pii pair<int,int> 
#define ff first
#define ss second

using namespace std;

int t,temp1,temp2,tempc;
char a[1000],b[1000];
char temp[1000];
int c[1000];

int addition(int n1,int n2)
{
	//printf("%d,%d ",n1,n2);
	if(n1>=n2)
	{
		if(n2!=-1)
		{
			temp1=(int)a[n1]-48;
			temp2=(int)b[n2]-48;
			tempc=temp1+temp2;
			//printf("%d,%d,%d",temp1,temp2,tempc);
			if(tempc+c[n1+1]>=10)
			{
				tempc-=10;
				c[n1]+=1;
			}
			c[n1+1]+=tempc;
			//printf("%d,%d",c[n1+1],tempc);
			addition(n1-1,n2-1);
		}
		else if(n1!=-1)
		{
			tempc=(int)a[n1]-48;
			if(tempc+c[n1+1]>=10)
			{
				c[n1+1]-=10;
				c[n1]+=1;
			}
			c[n1+1]+=tempc;
			addition(n1-1,n2);
		}
	}
	else
	{
		for(int x=0;x<max(strlen(a),strlen(b))+5;x++)
		{
			temp[x]=a[x];
			a[x]=b[x];
			b[x]=temp[x];
		}
		addition(n2,n1);
	}
}

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		scanf("%s",b);
		for(int x=0;x<max(strlen(a),strlen(b))+5;x++)
		{
			c[x]=0;
		}
		if(strlen(a)>80||strlen(b)>80)
		{
			printf("overflow\n");
			continue;
		}
		else
		{
			addition(strlen(a)-1,strlen(b)-1);
			//printf("%d",(int)a[1]);
			//printf("%d,%d\n",strlen(a),strlen(b));
		}
		if(c[0]>0&&max(strlen(a),strlen(b))>=80)
		{
			printf("overflow\n");
		}
		else
		{
			for(int z=0;z<max(strlen(a),strlen(b))+1;z++)
			{
				if(c[z]==0&&z==0)
				continue;
				printf("%d",c[z]);
			}
			printf("\n");
		}
	}
	return 0;
}