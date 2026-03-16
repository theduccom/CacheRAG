#include <iostream>
#include <cassert>
#include <cmath>
#include <complex>
using namespace std;


typedef complex<double> P;

#define EPS			(1e-10)
#define PI			(3.14159265358979323846)


#define X(a)		( (a).real() )
#define Y(a)		( (a).imag() )
#define EQ(a,b)		( -EPS<(a)-(b) && (a)-(b)<EPS )
#define EQV(a,b)	( EQ(X(a),X(b)) && EQ(Y(a),Y(b)) )

#define unit(a)		( (a)/abs(a) )
#define normal(a)	( (a)*P(0,1) )
#define dot(a,b)	( X((a)*conj(b)) )
#define cross(a,b)	( Y(conj(a)*(b)) )


int hitStateCC(P a, double ra, P b, double rb)
{	
	double cc=abs(a-b);

	if( EQ(cc,ra+rb) )	return  1;	// OÚ
	if( EQ(cc,abs(ra-rb)) )
	{
		if(EQ(ra,rb))	return -1;	// àÚ Ca==Cb
		if(ra>rb)		return  3;	// àÚ Ca>=Cb
		else			return -3;	// àÚ Ca<=Cb
	}

	if(cc>ra+rb)		return  0;	// £êÄ¢é
	if(cc<abs(ra-rb))
	{
		if(ra>rb)		return  4;	// àï Ca>Cb
		else			return -4;	// àï Ca<Cb
	}

	return 2;						// ð·
}

int main()
{
	int n; double a,b,c,d,e,f;
	
	cin >> n;
	while(n--)
	{
		cin >> a >> b >> c >> d >> e >> f;
		switch(hitStateCC(P(a,b),c,P(d,e),f))
		{
			case 0:
			cout << 0 << endl; break;

			case 1: case -1: case 2: case 3: case -3:
			cout << 1 << endl; break;

			case  4: cout <<  2 << endl;  break;
			case -4: cout << -2 << endl;  break;
		}
	}
}