#include <iostream>
using namespace std;

#define SAFE_DELETE( x ) { if ( x ){ delete x; x = NULL; } }

struct tCell{
	tCell(){
		x = y = size = 0;
		prev = next = NULL;
	}
	int x, y, size;
	tCell *prev, *next;
};

class MyArray{
public:
	MyArray() : size( 0 ), head( NULL ), tail( NULL ){
		head = new tCell;
		tail = new tCell;
		head->next = tail;
		tail->prev = head;
	}
	~MyArray(){
		for( int i = size; i > 0; --i ){
			tCell* cell = tail->prev;
			cell->prev->next = cell->next;
			cell->next->prev = cell->prev;
			SAFE_DELETE( cell );
		}
		SAFE_DELETE( tail );
		SAFE_DELETE( head );
	}

	void pushBack( int x, int y, int size ){
		++this->size;
		tCell* cell = new tCell;
		cell->x = x;
		cell->y = y;
		cell->size = size;
		cell->prev = tail->prev;
		cell->next = tail;
		cell->prev->next = cell;
		cell->next->prev = cell;
	}
	int getSize(){ return size; }

	tCell operator[]( int d ){
		tCell* cell = head->next;
		if ( d >= size ){ cell = NULL; return *cell; }
		for ( int i = 0; i < d; ++i ){
			cell = cell->next;
		}
		return *cell;
	}

private:
	int size;
	tCell *head, *tail;
};

const unsigned SX = 14;
const unsigned SY = 14;

void putInk( int x, int y, int* board, int* sample ){
	for ( int j = -2; j < 3; ++j ){
		for ( int i = -2; i < 3; ++i ){
			board[ ( y+j ) * SY + ( x+i ) ] += sample[ ( j+2 ) * 5 + ( i+2 ) ];
		}
	}
}

int main(){
	int x, y, size;
	char c;
	MyArray ma;
	int board[ SY * SX ];
	for ( int j = 0; j < SY; ++j ){
		for ( int i = 0; i < SX; ++i ){
			board[ j*SX + i ] = 0;
		}
	}

	int small[ 5 * 5 ];
	int medium[ 5 * 5 ];
	int large[ 5 * 5 ];
	for ( int j = 0; j < 5; ++j ){
		for ( int i = 0; i < 5; ++i ){
			small[ j*5 + i ] = medium[ j*5 + i ] = large[ j*5 + i ] = 0;
			if ( ( i >= 1 && i <=3 ) && ( j >= 1 && j <= 3 ) ) {
				small[ j*5 + i ] = medium[ j*5 + i ] = large[ j*5 + i ] = 1;
			}
			if ( ( i == 1 || i == 3 ) && ( j == 1 || j == 3 ) ) {
				small[ j*5 + i ] = 0;
			}
			if ( i == 2 || j == 2 ) {
				large[ j*5 + i ] = 1;
			}
		}
	}

	while ( cin >> x >> c >> y >> c >> size ){
		ma.pushBack( x+2, y+2, size );
	}

	for ( int i = 0; i < ma.getSize(); ++i ){
		x = ma[ i ].x;
		y = ma[ i ].y;
		size = ma[ i ].size;
		int* sample;
		switch ( size ){
			case 1 : sample = small; break;
			case 2 : sample = medium; break;
			case 3 : sample = large; break;
		}
		putInk( x, y, board, sample );
	}

	int blank = 0, depth = 0;
	for ( int j = 2; j < SY-2; ++j ){
		for ( int i = 2; i < SX-2; ++i ){
			if ( !board[ j * SY + i ] ) ++blank;
			else if ( depth < board[ j * SY + i ] ) depth = board[ j * SY + i ];
		}
	}

	cout << blank << endl << depth << endl;

	return 0;
}