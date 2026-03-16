
#define _USE_MATH_DEFINES
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#include <complex>
#include <stack>
#include <climits>
#include <set>
#include <numeric>

using namespace std;

typedef complex<double> P;
double sq(double x){return x*x;}

double cross(P x,P y){
	return x.real() * y.imag() - x.imag() * y.real();
}

char s[8][9];

char solve()
{
	
	vector<pair<int,int> > mino;
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if(s[i][j] == '1') mino.push_back(pair<int,int>(i,j));

	int hsum = 0,wsum = 0;
	for (int i = 1; i < 4; i++)
	{
		hsum += mino[i].first - mino[0].first;
		wsum += mino[i].second - mino[0].second;
	}
	if(hsum ==2 && wsum == 2) return 'A';
	else if(hsum == 6 && wsum == 0) return 'B';
	else if(hsum == 0 && wsum == 6) return 'C';
	else if(hsum == 4 && wsum == -2) return 'D';
	else if(hsum == 2 && wsum == 4) return 'E';
	else if(hsum == 4 && wsum == 2) return 'F';
	else return 'G';

}

int main(){
	while(true){
		for (int i = 0; i < 8; i++)
			if(!(cin>>s[i])) return 0;

		char ans = solve();
		printf("%c\n",ans);
	}
	return 0;
}