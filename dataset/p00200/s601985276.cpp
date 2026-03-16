#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

const int mx = 1<<28;

int cost[101][101];
int tIme[101][101];


int main(){
	int n , m;
	while(cin>>n>>m , n||m){
		for(int i=0;i<m;++i){
			for(int j=0;j<m;++j){
				cost[i][j]=mx;
				tIme[i][j]=mx;
			}
		}
		for(int i=0,a,b,c,t; i<n ; ++i){
			cin >> a >> b >> c >> t;
			a--; b--;
			cost[a][b]=c;
			cost[b][a]=c;
			tIme[a][b]=t;
			tIme[b][a]=t;
		}
		for(int i=0 ; i<m ; ++i ){
			for(int j=0 ; j<m ; ++j){
				for(int k=0 ; k<m ; ++k){
					cost[j][k]=min(cost[j][k] , cost[j][i]+cost[i][k]);
					tIme[j][k]=min(tIme[j][k] , tIme[j][i]+tIme[i][k]);
				}
			}
		}
		int k;
		cin >> k;
		for(int i=0 , p , q , r ; i<k ; ++i){
			cin >> p >> q >> r;
			p--; q--;
			cout << (r ? tIme[p][q] : cost[p][q] ) << endl;
		}
	}
	return 0; 
}