#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, id;
	long long int a, b;

	while( cin >> n , n ){
		map<int,long long int> employees;
		vector<int> vc;
		bool flag = true;
		
		for(int i=0 ; i<n ; ++i ){
			cin >> id >> a >> b;
			if( !employees[id] ) vc.push_back( id );
			employees[id] += a * b;	
		}
		for(int i=0 ; i<vc.size() ; ++i ){
			if( employees[ vc[i] ] >= 1000000 ){
				cout << vc[i] << endl;
				flag = false;
			}
		}
		if( flag ){
			cout << "NA" << endl;
		}
	}
}