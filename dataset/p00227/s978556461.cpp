#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int n,m;
	
	while(cin >> n >> m , n){
		vector<int> data(n);
		int ret = 0;
		rep(i,n)cin >> data[i];
		sort(data.begin(),data.end(),greater<int>());
		
		rep(i,n){
			if((i+1)%m==0)continue;
			ret += data[i];
		}
		cout << ret << endl;
	}
}