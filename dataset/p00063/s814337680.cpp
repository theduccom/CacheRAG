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
#include <functional>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;
typedef pair<int, int> pii;

int main()
{
	char str[128];
	int cnt = 0;
	while(scanf("%s", str) != EOF){
		bool palindrome = true;
		rep(i, strlen(str)/2){
			if(str[i] != str[strlen(str)-i-1]){
				palindrome = false;
				break;
			}
		}
		cnt += palindrome;
	}
	printf("%d\n", cnt);

	return 0;
}