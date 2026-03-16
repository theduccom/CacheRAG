#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin >> n, n) {
		int id, dis;
		id = -1, dis = -1;
		for(int i = 0; i < n; i++) {
			int p;
			int d1, d2; cin >> p >> d1 >> d2;
			if(dis < d1+d2) {
				id = p; dis = d1+d2;
			}
		}
		cout << id << " " << dis << endl;
	}
}