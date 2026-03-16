#include <iostream>
#include <cmath>

using namespace std;

class Vector3{
public:
	double x,y;

	Vector3(){}
	Vector3( double dx, double dy ){
		x = dx;
		y = dy;
	}

	void operator-=( Vector3 hoge ){
		x -= hoge.x;
		y -= hoge.y;
	}

	Vector3 operator-( Vector3 hoge ){
		return Vector3( x - hoge.x, y - hoge.y );
	}

};

double scaler( Vector3 hoge ){
	return sqrt( hoge.x * hoge.x + hoge.y * hoge.y );
}
int main(int argc, char const* argv[])
{
	Vector3 a,b;
	double ra,rb;

	int n;

	cin >> n;

	for( int i = 0;i < n;i++ ){
		cin >> a.x >> a.y >> ra >> b.x >> b.y >> rb;

		if( scaler( a - b ) > ra + rb ){ cout << 0 << endl; continue; }

		if( ra < rb ){
			if( rb - scaler( a - b ) <= ra ){ cout << 1 << endl; continue; }
			else { cout << -2 << endl; continue; }
		} else if( rb < ra ) {
			if( ra - scaler( a - b ) <= rb ){ cout << 1 << endl; continue; }
			else { cout << 2 << endl; continue; }
		} else { cout << 1 << endl; continue; }
	}
	return 0;



}