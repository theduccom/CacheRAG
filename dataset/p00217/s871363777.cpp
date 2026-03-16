/* 00:08 - 12:00 */
#include <iostream>
using namespace std;
int main(){
	int n,ret,p,a,b;
	
	while(cin >> n , n){
		pair<int,int> ret = make_pair(0,0) ;
		for(int i=0;i<n;i++){
			cin >> p >> a >> b;
			ret = max(ret,make_pair(a+b,p));
		}
		cout << ret.second << " " << ret.first << endl;
	}
}