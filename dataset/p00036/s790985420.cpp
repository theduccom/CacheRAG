#include <iostream>
#include <string>
using namespace std;

#define SAFE_DELETE( x ) { if ( x ){ delete x; x = NULL; } }
#define SAFE_DELETE_ARRAY( x ) { if ( x ){ delete[] x; x = NULL; } }

struct tCell{
	tCell() : board( NULL ), prev( NULL ), next( NULL ){}

	int* board;
	tCell *prev, *next;
};

class MyArray{
public:
	MyArray() : mSize( 0 ), head( NULL ), tail( NULL ){
		head = new tCell;
		tail = new tCell;
		head->next = tail;
		tail->prev = head;
	}
	~MyArray(){
		for ( int i = mSize; i > 0; --i ){
			tCell* cell = tail->prev;
			SAFE_DELETE_ARRAY( cell->board );
			cell->prev->next = cell->next;
			cell->next->prev = cell->prev;
			SAFE_DELETE( cell );
		}
		SAFE_DELETE( tail );
		SAFE_DELETE( head );
	}

	void pushBack( int* b ){
		++mSize;
		tCell* cell = new tCell;
		cell->board = b;
		cell->prev = tail->prev;
		cell->next = tail;
		cell->prev->next = cell;
		cell->next->prev = cell;
	}
	int size(){ return mSize; }

	tCell operator[]( int d ){
		tCell* cell = head->next;
		if ( d >= mSize ){
			cell = NULL;
			return *cell;
		}
		for ( int i = 0; i < d; ++i ){
			cell = cell->next;
		}
		return *cell;
	}

private:
	int mSize;
	tCell *head, *tail;
};

string checkModel( int* b ){
	string model;
	bool find = false;
	int x = 0, y = 0;
	for ( y = 0; y < 10; ++y ){
		for ( x = 0; x < 10; ++x ){
			if( b[ y*10 + x ] ){
				find = true;
				break;
			}
		} if ( find ) break;
	}

	if ( b[ y*10 + ( x+1 ) ] ){	//model A, C, E, G
		if ( b[ y*10 + ( x+2 ) ] ){	//model C
			model = "C";
		}else if ( b[ ( y+1 )*10 + ( x-1 ) ] ){	//model G
			model = "G";
		}else if ( b[ ( y+1 )*10 + ( x+2 ) ] ){	//model E
			model = "E";
		}else{	//model A
			model = "A";
		}
	}else{	//model B, D, F
		if ( b[ ( y+2 )*10 + x ] ){	//model B
			model = "B";
		}else if ( b[ (y+2)*10 + ( x-1 ) ] ){	//model D
			model = "D";
		}else{	//model F
			model = "F";
		}
	}

	return model;
}

int main(){
	bool first = true;
	int cnt = 0;
	int* board;
	string s;
	MyArray ma;

	while ( cin >> s ){
		if( first ){
			board = new int[ 10 * 10 ];
			for ( int i = 0; i < 10*10; ++i ){
				board[ i ] = 0;
			}
			cnt = 0;
			first = false;
		}
		for ( int i = 0; i < 8; ++i ){
			board[ (cnt+1)*10 + i+1 ] = static_cast< int >( s[ i ] - '0' );
		}

		++cnt;
		if ( cnt == 8 ){
			ma.pushBack( board );
			board = NULL;
			first = true;
		}
	}

	for ( int i = 0; i < ma.size(); ++i ){
		cout << checkModel( ma[ i ].board ) << endl;
	}

	return 0;
}