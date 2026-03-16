#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

////////////////*My library*////////////////////////
#define rep_to(a,i,n) for(i=a;i<n;i++)
#define rep(i,n) for(i=0;i<n;i++)
#define rep_r(i,n) for(i=n-1;i>=0;i--)
#define debug_i(x) printf("x:%d\n",x)
#define debug_f(x) printf("x:%f\n",x)
#define debug_s(str) printf("str:%s\n",str)
#define debug_c(c) printf("c:%c\n",c)
#define s_i1(x) scanf("%d",&x)
#define s_i2(x,y) scanf("%d %d",&x,&y)
#define s_i3(x,y,z) scanf("%d %d %d",&x,&y,&z)
////////////////////////////////////////////////////

////////////////////////
/*prime()*/
/*primecount()*/
/*sort()*/
///////////////////////
static int num[100000]={};

int primecount(int N)
{
	int i,j;
	int count=0;
	int box[100000]={};

	rep_to(2,i,N)box[i]=1;
	rep_to(2,i,sqrt(N))
	{
		for(j=i;j*i<N;j++)box[i*j]=0;
	}

	j=0;
	rep_to(2,i,N)
	{
		if(box[i]==1)
		{
			num[j]=i;
			j++;
		}
	}
	return j;
}
int tansaku(int max,int search)
{
	int min=0;
	int flag=0;
	int mark=0;
	while(min<=max)
	{
		mark=(min+max)/2;
		if(search>num[mark])min=mark+1;
		else if(search<num[mark])max=mark-1;
		else 
		{
			flag=1;
			break;
		}
	}
	return flag;
}

int main()
{
	int N,i,j,max,count=0,search=0;
	max=primecount(50000);
	while(s_i1(N)!=EOF)
	{
		if(N==0)break;
		count=0;
		search=0;
		rep(i,max)
		{
			search=N-num[i];
			if(num[i]>N/2)break;
			if(tansaku(max,search)==1)count++;
		}
		printf("%d\n", count);
	}
	return 0;
}