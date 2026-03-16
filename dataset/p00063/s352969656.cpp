#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
#include<string.h>

#define ll long long
#define LL long long
#define ULL unsigned long long 
#define ull unsigned long long 
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define RFOR(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=(n)-1;i>=0;i--)


using namespace std;

int main()
{
	char str[110] = {};
	int len=0;
	bool flag = true;
	int count = 0;
	while (cin >> str) {
		
		len = strlen(str);
		if (len % 2 != 0) {
			for (int i = 0; i < (len - 1)/2; i++) {
				if (str[i] != str[(len - 1) - i]) {
					flag = false;
				}
			}

		}
		else {
			for (int i = 0; i < (len) / 2; i++) {
				if (str[i] != str[(len - 1) - i]) {
					flag = false;
				}
			}
		}
		if (flag == true) {
			count++;
		}

		REP(i, 110) {
			str[i] == 0;
		}
		flag = true;
	}
	cout << count << endl;
	return 0;
}