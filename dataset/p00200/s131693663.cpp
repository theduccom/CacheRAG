/*
 * src.cpp
 *
 *  Created on: 2016/07/29
 *      Author: joi
 */

#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

const int MAX_M=100,INF=1e8;

int n,m,k;
int G[2][MAX_M][MAX_M];

void warshall_floyd(){
	REP(t,2){
		REP(k,m){
			REP(i,m){
				REP(j,m){
					G[t][i][j]=min(G[t][i][j],G[t][i][k]+G[t][k][j]);
				}
			}
		}
	}
}

int main(){
	do{
		scanf("%d %d",&n,&m);
		if (n || m){
			REP(t,2){
				REP(i,m){
					REP(j,m){
						G[t][i][j]=INF;
					}
				}
			}
			REP(t,2){
				REP(i,m){
					G[t][i][i]=0;
				}
			}
			REP(i,n){
				int a,b,c,t;
				scanf("%d %d %d %d",&a,&b,&c,&t);
				a--;
				b--;
				G[0][a][b]=G[0][b][a]=c;
				G[1][a][b]=G[1][b][a]=t;
			}
			warshall_floyd();
			scanf("%d",&k);
			REP(i,k){
				int p,q,r;
				scanf("%d %d %d",&p,&q,&r);
				p--;
				q--;
				printf("%d\n",G[r][p][q]);
			}
		}
	}while(n || m);
	return 0;
}