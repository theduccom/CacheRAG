#include <iostream>
#include <math.h>
using namespace std;

int n;

void solve()
{
	double nx,ny,nr,mx,my,mr,pdist;


	cin >> nx >> ny >> nr >> mx >> my >> mr;
	pdist = sqrt(pow((nx-mx), 2.0) + pow((ny-my),2.0));

	if(pdist - nr + mr < 0.0){
		cout << 2 << endl;
	}
	else if((pdist - mr + nr < 0.0)){
		cout << -2 << endl;
	}
	else if(pdist - mr - nr > 0.0){
		cout << 0 << endl;
	}
	else {
		cout << 1 << endl;
	}
}

int main(void)
{
	cin >> n;
	while(--n, n>=0){
		solve();
	}
	return 0;
}