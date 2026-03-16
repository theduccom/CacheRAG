// AOJ 0207
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct UF {
	vector <int> data;
	int cnt;
	UF(int n) : data(n, -1), cnt(n) {}
	bool merge(int a, int b){
		a = root(a), b = root(b);
		if (a != b){
			cnt--;
			if (data[b] < data[a]) std::swap(a, b);
			data[a] += data[b];
			data[b] = a;
		}
		return a != b;
	}
	bool same(int a, int b){
		return root(a) == root(b);
	}
	int root(int a){
		return data[a] >= 0 ? data[a] = root(data[a]) : a;
	}
	int size(int a){
		return ~data[root(a)];
	}
	int count(){
		return cnt;
	}
};

int main()
{
	int w, h;
	while (cin >> w >> h, w){
		int sx, sy, gx, gy, n;
		cin >> sx >> sy >> gx >> gy;
		cin >> n;

		int field[128][128] = {};
		for (int i = 0; i < n; i++){
			int c, d, x, y;
			cin >> c >> d >> x >> y;
			x--; y--;
			for (int j = 0; j < 4; j++){
				for (int k = 0; k < 2; k++){
					int jj = j, kk = k;
					if (d == 0) swap(jj, kk);
					jj += y; kk += x;
					field[jj][kk] = c;
				}
			}
		}

		UF uf(128*128);

		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				if (field[i][j] == 0) continue;
				if (field[i][j] == field[i][j + 1]){
					uf.merge(i * w + j, i * w + j + 1);
				}
				if (field[i][j] == field[i + 1][j]){
					uf.merge(i * w + j, i * w + w + j);
				}
			}
		}

		sy--; sx--; gx--; gy--;
		if (uf.same(sy * w + sx, gy * w + gx)){
			cout << "OK" << endl;
		}
		else {
			cout << "NG" << endl;
		}

	}

	return 0;
}