#include <cstdio>
#include <map>
#include <string>
using namespace std;

int main(){
	char buf[8];
	map<string,int> mp;
	while(scanf("%*d,%s", buf) == 1){
		++mp[buf];
	}
	printf("%d\n%d\n%d\n%d\n", mp["A"], mp["B"], mp["AB"], mp["O"]);
}