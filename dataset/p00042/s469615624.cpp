#include <iostream>
using namespace std;

#define SAFE_DELETE( x ){ if( x ){ delete x; x = NULL; } }

struct tCell{
	tCell() : value( 0 ), weight( 0 ), unitV( 0.0 ), prev( NULL ), next( NULL ){}

	int value, weight;
	double unitV;
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
		init();
		SAFE_DELETE( tail );
		SAFE_DELETE( head );
	}

	void init(){
		for ( int i = mSize; i > 0; --i ){
			tCell* cell = tail->prev;
			cell->prev->next = cell->next;
			cell->next->prev = cell->prev;
			SAFE_DELETE( cell );
		}
		mSize = 0;
	}
	void pushBack( int value, int weight ){
		++mSize;
		tCell* cell = new tCell;
		cell->value = value;
		cell->weight = weight;
		cell->unitV = static_cast< double >( value ) / weight;
		cell->prev = tail->prev;
		cell->next = tail;
		cell->prev->next = cell;
		cell->next->prev = cell;
	}
	int size(){ return mSize; }

	tCell operator[]( int index ){
		tCell* cell = head->next;
		for ( int i = 0; i < index; ++i ){
			cell = cell->next;
		}
		return *cell;
	}

private:
	int mSize;
	tCell *head, *tail;
};

int main(){

	MyArray treList;
	int time = 1, c;
	int v = 0, w = 0;
	char d;

	while ( cin >> c ){
		if ( !c ) break;
		int n;
		treList.init();
		cin >> n;
		for ( int i = 0; i < n; ++i ){
			cin >> v >> d >> w;
			treList.pushBack( v, w );
		}

		int maxV = 0, maxW = 0;
		int* table = new int[ ( n+1 ) * ( c+1 ) ];
		for ( int i = 0; i < n+1; ++i ){
			if ( i != 0 ){
			v = treList[ i - 1 ].value;
			w = treList[ i - 1 ].weight;
			}
			for ( int j = 0; j < c+1; ++j ){
				if ( i == 0 || j == 0 ){
					table[ i * ( c+1 ) + j ] = 0;
					continue;
				}
				table[ i * ( c+1 ) + j ] = table[ ( i-1 ) * ( c+1 ) + j ];
				if ( ( j - w >= 0 ) && ( table[ ( i-1 ) * ( c+1 ) + ( j-w ) ] + v > table[ ( i-1 ) * ( c+1 ) + j ] ) ){
					table[ i * ( c+1 ) + j ] = table[ ( i-1 ) * ( c+1 ) + ( j-w ) ] + v;
					if ( table[ i * ( c+1 ) + j ] > maxV ){
						maxV = table[ i * ( c+1 ) + j ];
						maxW = j;
					}else if ( table[ i * ( c+1 ) + j ] == maxV && j < maxW ){
						maxW = j;
					}
				}
			}
		}

		cout << "Case " << time << ":" << endl;
		cout << maxV << endl << maxW << endl;
		++time;

		delete[] table;
	}

	return 0;
}