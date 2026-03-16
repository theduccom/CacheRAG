#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	char s[100000];
	int cnt = 0;
	
	while(scanf("%s", s) != EOF){
		string t(s);
		
		reverse(t.begin(), t.end());
		
		if (t == s){
			cnt++;
		}
	}
	
	printf("%d\n", cnt);
	
	return(0);
}