#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>
 
using namespace std;
 
#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

#ifdef __BORLANDC__
	typedef __int64 ll;
#else
	typedef long long ll;
#endif


int main(){
	int n;
	cin>>n;
	
	rep(i,n){
		const int H = 8;
		vector<string> m(H);
		rep(i,H){
			cin>>m[i];
		}
		
		int stx,sty;
		cin>>stx>>sty;
		stx--;sty--;
		
		if(m[sty][stx]=='1')m[sty][stx]='2';
		
		
		while(1){
			bool moved = false;
			
			rep(i,H){
				rep(j,H){
					if(m[i][j]=='2'){
						reps(k,-3,4){
							reps(p,-3,4){
								int ny = i+k;
								int nx = j+p;
								if(k!=0 && p!=0)continue;
								if(ny<0||nx<0||ny>=H || nx>=H)continue;
								if(m[ny][nx]=='1'){
									m[ny][nx]='2';
									moved=true;
								}
							}
						}
						m[i][j]='0';
						moved=true;
					}
				}
			}
			
			if(!moved)break;
		}
		
		printf("Data %d:\n",i+1);
		rep(i,H){
			cout<<m[i]<<endl;
		}
	}
}