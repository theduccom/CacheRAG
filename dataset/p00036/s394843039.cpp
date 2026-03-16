#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<numeric>
#include<algorithm>
#include<bitset>
#include<complex>

using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
#define mp make_pair

template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
int in() { int x; scanf("%d", &x); return x; }

string str[8];

bool F(int x,int y){
	return (0<=x&&x<8&&0<=y&&y<8&&str[y][x]=='1')?true:false;
}

int main() {
	while(cin>>str[0]>>str[1]>>str[2]>>str[3]>>str[4]>>str[5]>>str[6]>>str[7]){
		int x,y;
		for(y=0;y<8;y++){
			for(x=0;x<8;x++){
				if(F(x,y)){
					if(F(x+1,y)){
						if(F(x+2,y)){
							puts("C");
						}else{
							if(F(x,y+1)){
								if(F(x+1,y+1)){
									puts("A");
								}else{
									puts("G");
								}
							}else{
								puts("E");
							}
						}
					}else{
						if(F(x,y+2)){
							puts("B");
						}else if(F(x-1,y+2)){
							puts("D");
						}else{
							puts("F");
						}
					}
					goto next;
				}
			}
		}
		next:;
	}
	return 0;
}