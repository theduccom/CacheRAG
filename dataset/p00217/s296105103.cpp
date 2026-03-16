#include <iostream>
#include <map>
using namespace std;

int main(){
	int n, ans;
	while( cin >> n , n ){
		map<int,int> a;
		for(int i=0 ; i<n ; ++i ){
			int p,d1,d2;
			cin >> p >> d1 >> d2;
			a[p] = d1 + d2;
		}
		typedef map<int,int>::iterator Iter;
		int foo = 0;
		for(Iter it = a.begin() ;it!=a.end();++it){
			if( foo <= it->second ){
				foo = it->second;
				ans = it->first;
			}
		}
		cout << ans << " " << a[ans] << endl;
	}
}