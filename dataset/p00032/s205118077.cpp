#include <iostream>
#include <cmath>
using namespace std;

#define SAFE_DELETE( x ) { if ( x ){ delete x; x = NULL; } }

struct tCell{
	tCell() : side1( 0 ), side2( 0 ), diagonal( 0 ), prev( NULL ), next( NULL ){}
	int side1, side2, diagonal;
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
			cell->prev->next = cell->next;
			cell->next->prev = cell->prev;
			SAFE_DELETE( cell );
		}
		SAFE_DELETE( tail );
		SAFE_DELETE( head );
	}

	void pushBack( int a, int b, int c ){
		++mSize;
		tCell* cell = new tCell;
		cell->side1 = a;
		cell->side2 = b;
		cell->diagonal = c;
		cell->prev = tail->prev;
		cell->next = tail;
		cell->prev->next = cell;
		cell->next->prev = cell;
	}
	int size(){ return mSize; }

	tCell operator[]( int d ){
		tCell* cell = head->next;
		if ( d >= mSize ){ cell = NULL; return *cell; }
		for ( int i = 0; i < d; ++i ){
			cell = cell->next;
		}
		return *cell;
	}

private:
	int mSize;
	tCell *head, *tail;
};

int main(){
	char c;
	int side1, side2, diagonal;
	MyArray ma;

	while ( cin >> side1 >> c >> side2 >> c >> diagonal ){
		ma.pushBack( side1, side2, diagonal );
	}

	side1 = side2 = 0;

	for ( int i = 0; i < ma.size(); ++i ){
		if ( ma[ i ].side1 == ma[ i ].side2 ){
			++side2;
		}else{
			double oblique = sqrt( pow( static_cast< double >( ma[ i ].side1 ), 2.0 )
								 + pow( static_cast< double >( ma[ i ].side2 ), 2.0 ) );
			if ( static_cast< double >( ma[ i ].diagonal ) == oblique ){
				++side1;
			}
		}
	}

	cout << side1 << endl << side2 << endl;

	return 0;
}