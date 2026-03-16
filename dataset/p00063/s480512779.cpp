#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define clear(v) memset(v,0,sizeof(v))
#define ALL(v) (v).begin(),(v).end()
int main(){
	string s;
	int cnt = 0;
	while (cin >> s){
		string ss;
		ss = s;
		reverse(ALL(s));
		if (s == ss) cnt++;
	}
	cout << cnt << endl;
}