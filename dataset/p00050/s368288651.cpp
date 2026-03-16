#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to)

int main() {
	char s[1010];
	rep(i,1010) {
		s[i] = '\n';
	}
	string x = "apple";
	string y = "peach";
	const char *a = x.c_str();
	const char *b = y.c_str();
	gets(s);
	string ns = s;
	int len = ns.length();
	rep(i,len) {
		string t;
		rep(j,5) {
			t += s[i+j];
		}
		const char *c = t.c_str();
		if(!strcmp(a, c)) {
			rep(j,5) {
				s[i+j] = b[j];
			}
		} else if(!strcmp(b, c)) {
			rep(j,5) {
				s[i+j] = a[j];
			}
		}
	}
	puts(s);
	return 0;
}