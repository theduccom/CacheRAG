#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,m, cost;

	while( cin >> n >> m , n|m ){
		int sum = 0;
		vector<int> vc;
		for(int i=0 ; i<n ; ++i){
			cin >> cost;
			vc.push_back( cost );
		}
		sort( vc.begin() , vc.end() );
		reverse( vc.begin() , vc.end() );
		for(int i=0 ; i<(int)vc.size() ; ++i ){
			if( (i+1)%m != 0 ){
				sum += vc[i];
			}
		}
		cout << sum << endl;
	}
}