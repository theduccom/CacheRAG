#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define shosu(x) fixed<<setprecision(x)
using namespace std;

int V,E,sta,fin,mon,cha,sum,inf=100000,cost[25][25],dist[25];
bool used[25];

int main(){
	char tmp;
	cin>>V>>E;
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			cost[i][j]=inf;
		}
	}
	for(int i=0;i<V;i++){
		cost[i][i]=0;
	}
	for(int i=0;i<E;i++){
		int a,b,c,d;
		cin>>a>>tmp>>b>>tmp>>c>>tmp>>d;
		cost[a-1][b-1]=c;
		cost[b-1][a-1]=d;
	}
	cin>>sta>>tmp>>fin>>tmp>>mon>>tmp>>cha;
	for(int k=0;k<2;k++){
		int x,y;
		if(k==0){
			x=sta;
			y=fin;
		}
		else{
			x=fin;
			y=sta;
		}
		fill(dist,dist+V,inf);
		fill(used,used+V,false);
		dist[x-1]=0;
		while(1){
			int v=-1;
			for(int i=0;i<V;i++){
				if(!used[i]&&(v==-1||dist[i]<dist[v])) v=i;
			}
			if(v==-1) break;
			used[v]=true;
			for(int i=0;i<V;i++){
				dist[i]=min(dist[i],dist[v]+cost[v][i]);
			}
		}
		sum+=dist[y-1];
	}
	cout<<mon-sum-cha<<endl;
}