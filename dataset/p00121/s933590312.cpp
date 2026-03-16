#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<string>
#include<stack>
#include<cstdio>
using namespace std;

typedef pair<int,int> P;
typedef pair<int,P> P1;

#define fr first
#define sc second
#define rep(i,x) for(int i=0;i<x;i++)
#define rep1(i,x) for(int i=1;i<=x;i++)
#define sor(v) sort(v.begin(),v.end())
#define min_3(a,b,c) min(a,min(b,c))
#define max_3(a,b,c) max(a,max(b,c))
#define mp1(a,b,c) P1(a,P(b,c))
#define mp make_pair

const int INF=1000000000;
const int dre_4[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
const int dre_8[8][2]={{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1}};

const int kaijou[10]={1,1,2,6,24,120,720,5040,40320,362880};

int cast(int *a){
	int b[10];
	rep(i,8)b[i]=*a++;
	
	bool used[10];
	rep(i,8)used[i]=false;
	
	int ret=0;
	rep(i,8){
		int cnt=0;
		rep(j,b[i])if(!used[j])cnt++;
		ret+=cnt*kaijou[7-i];
		used[b[i]]=true;
	}
	
	return ret;
}

struct array{
	int a[8];
	int num;
	int cas;
};

int main(){
	static int cost[50010]; rep(i,50010)cost[i]=INF;
	static bool use[50010]; rep(i,50010)use[i]=false;
	
	queue<pair<array,int>> que;
	array a; rep(i,8)a.a[i]=i; a.num=0; a.cas=0;
	que.push(mp(a,0)); cost[0]=0;
	
	while(!que.empty()){
		pair<array,int> P=que.front(); que.pop();
/*rep(i,8){
	cout<<P.fr.a[i]<<" ";
}
	cout<<":"<<P.fr.num<<" "<<P.fr.cas<<endl;
	cout<<P.sc<<endl;
*/
		if(!use[P.fr.cas]){
			a=P.fr;
			
			a.a[a.num]=a.a[(a.num+4)%8];
			a.a[(a.num+4)%8]=0;
			a.num=(a.num+4)%8;
			a.cas=cast(a.a);
			if(cost[a.cas]>P.sc+1){
				cost[a.cas]=P.sc+1;
				que.push(mp(a,P.sc+1));
			}
			a=P.fr;
			
			if(a.num%4!=0){
				a.a[a.num]=a.a[a.num-1];
				a.a[a.num-1]=0;
				a.num--;
				a.cas=cast(a.a);
				if(cost[a.cas]>P.sc+1){
					cost[a.cas]=P.sc+1;
					que.push(mp(a,P.sc+1));
				}
				a=P.fr;
			}
			
			if(a.num%4!=3){
				a.a[a.num]=a.a[a.num+1];
				a.a[a.num+1]=0;
				a.num++;
				a.cas=cast(a.a);
				if(cost[a.cas]>P.sc+1){
					cost[a.cas]=P.sc+1;
					que.push(mp(a,P.sc+1));
				}
				a=P.fr;
			}
		
			use[P.fr.cas]=true;
		}
	}
	
	while(cin>>a.a[0]){
		rep1(i,7)scanf("%d",&a.a[i]);
		printf("%d\n",cost[cast(a.a)]);
	}
}