#include <iostream>

using namespace std;

typedef struct {
	int p;
	int d;
} Patient;

static const int MAX_N = 10000;

Patient P[MAX_N];

int main(int argc, char**)
{
	int n, d1, d2;

	while( 1 )
	{
		cin >> n;
		if(n==0) break;

		for(int i=0; i<n; i++)
		{
			cin >> P[i].p; 
			cin >> d1;
			cin >> d2;
			P[i].d = d1 + d2;
		}

		int idx = 0;
		for(int i=0; i<n; i++)
		{
			if(P[idx].d < P[i].d)
			{
				idx = i;
			}
		}

		cout << P[idx].p << " " << P[idx].d << endl;
	}
}