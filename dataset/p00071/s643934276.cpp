#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef pair<int,P> P1;
typedef pair<P,P> P2;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
bool in(int x,int y){
	if(x>=0 && x<8 && y>=0 && y<8){
		return true;
	}else{
		return false;
	}
}
int n;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		char field[10][10];
		for(int j=0;j<8;j++){
			scanf(" %s",field[j]);
		}
		int a,b;
		scanf("%d %d",&a,&b);
		queue<P>que;
		que.pu(mp(b-1,a-1));
		while(!que.empty()){
			P p=que.front();
			que.pop();
			field[p.first][p.second]='0';
			int dx[12]={-1,-2,-3,0,0,0,1,2,3,0,0,0};
			int dy[12]={0,0,0,-1,-2,-3,0,0,0,1,2,3};
			for(int j=0;j<12;j++){
				if(in(p.first+dx[j],p.second+dy[j])){
					if(field[p.first+dx[j]][p.second+dy[j]]=='1'){
						que.push(mp(p.first+dx[j],p.second+dy[j]));
						field[p.first+dx[j]][p.second+dy[j]]='0';
					}
				}
			}
		}
		printf("Data %d:\n",i);
		for(int j=0;j<8;j++){
			printf("%s\n",field[j]);
		}
	}
}