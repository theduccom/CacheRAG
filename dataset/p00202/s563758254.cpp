#include<iostream>
#include<utility>
#include<queue>
#include<functional>
#include<cstring>
#include<vector>
#include<climits>
#include<map>
using namespace std;
#define FOR(i,n) for(int i=0;i<(int)n;i++)
#define FORI(i,k,n) for(int i=k;i<(int)n;i++)
#define ALL(x) (x).begin(),(x).end()
typedef pair<int,int> pii;
typedef vector<int> vi;

const int M=1010000;
vi pri;
int pf[M]={1,1};

void calc_pri()
{
	FORI(i,2,M)
	{
		if(!pf[i])
		{
			pri.push_back(i);
			for(int j=i+i;j<M;j+=i)
			{
				pf[j]=1;
			}
		}
	}
}	



int a[M];

int main()
{
	calc_pri();
	int x,n;
	while(cin>>n>>x&&n)
	{
		FOR(i,M)a[i]=0;
		a[0]=1;
		FOR(i,n)
		{
			int k;cin>>k;
			FOR(j,M)
			{
				if(j+k>=M)break;
				if(a[j])a[j+k]=1;
			}
		}
		for(int i=x;i>=0;i--)
		{
			if(i==0)cout<<"NA"<<endl;
			if(a[i]&&!pf[i])
			{
				cout<<i<<endl;
				break;
			}
		}
	}
	
}