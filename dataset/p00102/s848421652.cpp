#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int n;
	while(cin >> n,n){
		int data[101][101] = {0};
		rep(i,n)rep(j,n)
			cin >> data[i][j] , data[n][n] += data[i][j];
		rep(i,n){
			int s = 0;
			rep(j,n) s+= data[i][j];
			data[i][n] = s;
		}
		rep(i,n){
			int s = 0;
			rep(j,n) s+= data[j][i];
			data[n][i] = s;
		}
		rep(i,n+1){
			rep(j,n+1)
				printf("%5d",data[i][j]);
			cout << endl;
		}
	}
}