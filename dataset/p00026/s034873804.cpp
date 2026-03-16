//0026 Dropping Ink
//ÉCNðÆµÄV~ðÂ¯é
//¢­ç©CNðÆµ½ãAÜ¾V~ªoÄ¢È¢Æ±ëÆAêÔZ¢V~ÌÊð¦æ

//¡ñàI¹ð½à¢ÄÈ¢æH

#include<iostream>
#include<algorithm>
#include<limits>
using namespace std;

class Paper
{
public:
	static const int N = 10;
	static const int SIDE_SIZE = N+4;	//åÌCNÅRêÈ¢öxÌCN
	static const int FIELD_SIZE= SIDE_SIZE * SIDE_SIZE;
private:
	int a[FIELD_SIZE];
public:

	Paper(){fill(a, a+FIELD_SIZE, 0);}
	void Drop(int x, int y, int dropSize)
	{
		if(dropSize >= 3)
		{
			static const int X[] = {-2, 0, 2, 0};
			static const int Y[] = {0,  2, 0,-2};
			const int s = sizeof(X)/sizeof(X[0]);
			for(int i = 0; i < s; i++)
				Get(x+X[i], y+Y[i])++;
		}
		if(dropSize >= 2)
		{
			static const int X[] = {-1, 1, 1, -1};
			static const int Y[] = {1, -1, 1, -1};
			const int s = sizeof(X)/sizeof(X[0]);
			for(int i = 0; i < s; i++)
				Get(x+X[i], y+Y[i])++;
		}
		static const int X[] = {0, 1, 0, -1, 0};
		static const int Y[] = {0, 0, 1, 0, -1};
		const int s = sizeof(X)/sizeof(X[0]);
		for(int i = 0; i < s; i++)
			Get(x+X[i], y+Y[i])++;
	}
	int& Get(int x, int y){return a[(y+2)*SIDE_SIZE + (x+2)];}
};

int main(void)
{
	int x, y, size;
	char dummy;

	Paper p;

	while( cin >> x >> dummy >> y >> dummy >> size )
	{
		p.Drop(x, y, size);
	}

	int whiteCount = 0,
		maxDensity = numeric_limits<int>::min();
	for(x = 0; x < Paper::N; x++)
	{
		for(y = 0; y < Paper::N; y++)
		{
			int density = p.Get(x, y);
			if(!density)
				whiteCount++;
			maxDensity = max(maxDensity, density);
		}
	}

	cout << whiteCount << endl << maxDensity << endl;

	return 0;
}