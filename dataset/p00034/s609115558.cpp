#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
void getValue(string& line, int* D, int& v1, int& v2){
	string::size_type p1 = 0;
	string::size_type p2 = line.find(',');
	int k, i = 0;
	while (p1 != string::npos){
		if (p1 == 0) k = atoi(line.substr(0, p2).c_str());
		else if( p2 != string::npos)	k = atoi(line.substr(p1 + 1, p2 - p1 - 1).c_str());
		else k = atoi(line.substr(p1 + 1).c_str());
		if (i < 10) D[i] = k;
		else if (i == 10) v1 = k;
		else if (i == 11) v2 = k;
		p1 = p2;
		++i;
		if(p1 != string::npos)
			p2 = line.find(',', p1 + 1);
	}
}
int main()
{
	int D[10] = {}, S[10] = {};
	int v1, v2, d, v;
	string line;
	while (cin >> line){
		getValue(line, D, v1, v2);
		d = 0;
		for (int i = 0; i < 10; ++i){
			d += D[i];
			if (0 == i) S[0] = D[i];
			else		S[i] = S[i - 1] + D[i];
		}
		v = v1 + v2;
		double t = (double)d / (double)v;
		double a = t * v1;
		int b = 0;
		for (int i = 0; i < 10; ++i){
			if (0 == i){
				if (a <= S[0]){
					b = 1;
					break;
				}
			}
			else{
				if (S[i - 1] < a && a <= S[i]){
					b = i + 1;
					break;
				}
			}
		}
		cout << b << "\n";
	}
	return 0;
}