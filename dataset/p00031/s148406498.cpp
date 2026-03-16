#include<iostream>
#include<vector>
#include<memory.h>
using namespace std;
const int g[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
int f[10] = { 0 };
vector<int> p;
int main()
{
	int n;
	while (cin >> n){
		p.clear();
		memset(f, 0, sizeof(f));
		
		
		while (n != 0){
			for (int i = 9; i >= 0; i--){
				if (n - g[i] >= 0 && f[i] == 0){
					n -= g[i];
					f[i] = 1;
					p.push_back(g[i]);
				}
			}
		}
		for (int i = p.size() - 1; i >= 1; i--){
			cout << p[i] << " ";
		}
		cout << p[0] << endl;
	}
}