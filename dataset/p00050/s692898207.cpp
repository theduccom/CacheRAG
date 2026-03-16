#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <set>
#include <iostream>
#include <map>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	string str;
	getline(cin, str);

	int apple = str.find("apple");
	int peach = str.find("peach");
	rep(i, str.size()){
		if(apple == i){
			printf("peach");
			i += 4;
			apple = str.find("apple", i);
		}else if(peach == i){
			printf("apple");
			i += 4;
			peach = str.find("peach", i);
		}else
			putchar(str[i]);
	}
	puts("");

	return 0;
}