#include<iostream>
#include<vector>
using namespace std;
struct MyStruct{
	int n;
	int w;
};
int main() {
	vector<MyStruct>l;
	MyStruct t;
	int num, walk1, walk2, n, mnum, mwalk;
	while (cin >> n){
		if (n == 0)break;
		cin >> num >> walk1 >> walk2;
		walk1 += walk2;
		mnum = num;
		mwalk = walk1;
		for (int i = 0; i < n - 1; i++) {
			cin >> num >> walk1 >> walk2;
			walk1 += walk2;
			if (walk1 >= mwalk){
				mnum = num;
				mwalk = walk1;
			}
		}
		t.n = mnum;
		t.w = mwalk;
		l.push_back(t);
	}
	for (MyStruct i : l) {
		cout << i.n << ' ' << i.w << endl;
	}
	char qq;
	cin >> qq;
}