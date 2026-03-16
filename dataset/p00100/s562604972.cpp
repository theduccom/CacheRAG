#include <iostream>
#include <vector>
using namespace std;

const int BORDER = 1000000;

class myMap
{
public:
	myMap() :mSize( 0 ){}

	void insert( int id, int p, int q ){
		bool find = false;
		long long gross = ( long long )p * q;
		for( int i = 0; i < mSize; ++i ){
			if( mIDList[ i ].first == id ){
				if( mIDList[ i ].second < 1000000 ){
					mIDList[ i ].second += gross;
				}
				find = true;
				break;
			}
		}
		if( !find ){
			mIDList.push_back( pair< int, long long >( id, gross ) );
			++mSize;
		}
	}
	void output(){
		bool finded = false;
		for( int i = 0; i < mSize; ++i ){
			if( mIDList[ i ].second >= BORDER ){
				finded = true;
				cout << mIDList[ i ].first << endl;
			}
		}
		if( !finded ){
			cout << "NA" << endl;
		}
	}

	vector< pair< int, long long > > mIDList;
	int mSize;
};

int main()
{
	int n;

	while( cin >> n && n ){
		myMap db;
		int id, unit, amount;
		for( int i = 0; i < n; ++i ){
			cin >> id >> unit >> amount;
			db.insert( id, unit, amount );
		}
		db.output();
	}

	return 0;
}