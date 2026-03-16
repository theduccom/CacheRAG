#include<iostream>
#include<vector>
using namespace std;
int main(void){
	int n, d;

	while (1){
		n = 0;
		d = 0;
		cin >> n;
		if (n == 0)
			break;
		vector<int> p(n), d1(n), d2(n), dsum(n);

		for (int i = 0; i < n; i++){
			cin >> p.at(i) >> d1.at(i) >> d2.at(i);
			dsum.at(i) = d1.at(i) + d2.at(i);
		}

		for (int i = 0; i < n;i++){
			if (dsum.at(0) < dsum.at(i)){
				swap(dsum.at(0), dsum.at(i));
				swap(p.at(0), p.at(i));
			}
		}

		cout << p.at(0) << " " << dsum.at(0) << endl;
	}
	return 0;
}
