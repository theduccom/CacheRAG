#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class myList
{
public:
	myList() : mSize( 0 ){}

	void insert( string str, int page ){
		for( int i = 0; i < mSize; ++i ){
			if( str == mList[ i ].first ){
				mList[ i ].second.push_back( page );
				return;
			}
		}
		vector< int > vec;
		vec.push_back( page );
		mList.push_back( pair< string, vector< int > >( str, vec ) );
		++mSize;
	}

	void sort(){
		std::sort( mList.begin(), mList.end() );
		for( int i = 0; i < mSize; ++i ){
			std::sort( mList[ i ].second.begin(), mList[ i ].second.end() );
		}
	}

	void output(){
		for( int i = 0; i < mSize; ++i ){
			cout << mList[ i ].first << endl;
			for( int j = 0; j < (int)mList[ i ].second.size(); ++j ){
				if( j != 0 ){
					cout << " ";
				}
				cout << mList[ i ].second[ j ];
			}
			cout << endl;
		}
	}

	vector< pair< string, vector< int > > > mList;
	int mSize;
};

int main()
{
	string str;
	int page;
	myList db;

	while( cin >> str >> page ){
		db.insert( str, page );
	}
	db.sort();
	db.output();

	return 0;
}