#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> money;
void del(int,int);
int add ();

int main() {
	int n,m,p,sum;
	
	while ( cin >> n, cin >> m, n, m ) {
		//初期化
		money.clear();
		
		
		for ( int i = 0; i < n; i++ ) {
			cin >> p;
			money.push_back ( p );
		}
		
		sort( money.begin() , money.end() , greater<int>() );
		del (n / m , m);
		sum = add ();
		
		cout << sum << endl;
	}
	return 0;
}

void del(int hoge , int m) {
	vector<int>::iterator it = money.begin();
	for( int i = 1; i <= hoge; i++ ) {
		money.erase( money.begin() +  (i * m - i) );
	}
}

int add () {
	int sum = 0;
	
	vector<int>::iterator it = money.begin();
	while( it != money.end() ) {
		sum += *it;
		it++;
	}
	return sum;
}