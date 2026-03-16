#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
#define int long long
signed main(){
	float a;
	vector<float> d;
	while( scanf("%f", &a) != EOF ){
		d.push_back(a);
	}
	sort(d.begin(),d.end());
	cout << d[d.size()-1] - d[0] << endl;
	return 0;
}