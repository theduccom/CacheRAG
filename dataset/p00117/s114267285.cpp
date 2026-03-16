#define	_USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <string>
using namespace std;
int n;
int s[21]={0};
int d[21][21]={0};
void warshall_floyd(){
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
				}
					
			
		}
	}
	
}
int main(){
	
	int m;
	int a,b,c1,c2;
	char comma;
	int x1,x2,y1,y2;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j)
				d[i][j]=999999;
		}
	}
	
	for(int i=0;i<m;i++){
		cin>>a>>comma>>b>>comma>>c1>>comma>>c2;
		d[a][b]=c1;
		d[b][a]=c2;
	}
	
	warshall_floyd();
	
	cin>>x1>>comma>>x2>>comma>>y1>>comma>>y2;
	
	cout<<y1-y2-d[x1][x2]-d[x2][x1]<<endl;
}