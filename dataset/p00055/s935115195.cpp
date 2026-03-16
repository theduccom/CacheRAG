#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<cctype>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>

using namespace std;
const int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};
#define INF 999999
#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=j;i<k;i++)
typedef long long ll;
typedef unsigned long long ull;

int main(){
    double num;
    while(~scanf("%lf",&num)){
        double ans = num;
        double bef = num;
        rep(i,9){
           if(i % 2 == 1){
                ans += bef / 3;
                bef = bef / 3;
           }
           else{
                ans += bef * 2;
                bef = bef * 2;
           }
        }
        printf("%lf\n",ans);
    }
	return 0;
}