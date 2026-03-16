#include<iostream>
using namespace std;

int main()
{
	while (true){
		int n, dist = 0, who = 0;
		cin >> n;
		if (!n) break;
		for (int i = 0; i < n; i++){
			int p, d1, d2;
			cin >> p >> d1 >> d2;
			if (dist < d1 + d2) dist = d1 + d2, who = p;
		}
		cout << who << " " << dist << endl;
	}
	return 0;
}