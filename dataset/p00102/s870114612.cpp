
#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<complex>
#include<cstdio>
using namespace std ;
typedef vector<int> vi ;
typedef vector<vi> vvi ;
typedef vector<string> vs ;
typedef pair<int, int> pii; 
typedef long long ll ;

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)
#define all(a) (a).begin(),(a).end()


int main(void){
	int n;	
	while(cin>>n,n){	
		vvi ma(n+1,vi(n+1));
		rep(i,n){
			rep(j,n){
				cin>>ma[i][j];
				ma[n][j]+=ma[i][j];
				ma[i][n]+=ma[i][j];
			}
		}
		rep(i,n){
			ma[n][n]+=ma[i][n];
		}
		rep(i,n+1){
			rep(j,n+1){
				printf("%5d",ma[i][j]);
			}
			cout<<endl;
		}
	}
}