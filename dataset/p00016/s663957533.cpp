#include <iostream>
using namespace std;
#include <cmath>

#define PI 3.141592
#define SAFE_DELETE( x ) { if ( x ){ delete x; x = NULL; } }

struct tCell{
	int x, y;
	tCell* prev;
	tCell* next;
};

class myArray{
public:
	myArray() : mSize( 0 ), head( NULL ), tail( NULL ){
		tail = new tCell;
		head = new tCell;
		head->prev = tail->next = NULL;
		head->next = tail;
		tail->prev = head;
		head->x = head->y = tail->x = tail->y = 0;
	}
	~myArray(){
		for ( int i = mSize; i > 0; --i ){
			--mSize;
			tCell* cell = tail->prev;
			cell->prev->next = cell->next;
			cell->next->prev = cell->prev;
			SAFE_DELETE( cell );
		}
		SAFE_DELETE( head );
		SAFE_DELETE( tail );
	}
	void pushBack( int x, int y ){
		++mSize;
		tCell* cell = new tCell;
		cell->x = x;
		cell->y = y;
		cell->prev = tail->prev;
		cell->next = tail;
		cell->prev->next = cell;
		cell->next->prev = cell;
	}
	tCell operator[]( int p ){
		if ( p >= mSize ){
			tCell* cell = NULL;
			return *cell;
		}
		tCell* cell = head;
		for( int i = 0; i <= p; ++i ){
			cell = cell->next;
		}
		return *cell;
	}
	int getSize(){ return mSize; }
private:
	int mSize;
	tCell* head;
	tCell* tail;
};

int main(){
	int move = 0, angle = 0;
	double x = 0.0, y = 0.0, theta = 90.0;
	char c;
	myArray mA;

	while ( cin >> move >> c >> angle ){
		if ( !move && !angle ) break;
		mA.pushBack( move, angle );
	}

	for ( int i = 0; i < mA.getSize(); i++ ){
		if ( i ){
			theta -= static_cast< double >( mA[ i - 1 ].y );
		}
		double rad = theta * PI / 180.0;
		x += mA[ i ].x * cos( rad );
		y += mA[ i ].x * sin( rad );
	}

	cout << static_cast< int >( x ) << endl;
	cout << static_cast< int >( y ) << endl;

	return 0;
}