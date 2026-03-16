#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip> 
#include <complex> 
#include <string>
#include <vector> 
#include <list>
#include <deque> 
#include <stack> 
#include <queue> 
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <utility>
#include <algorithm> 
#include <numeric> 
#include <typeinfo> 
#include <cstdio>
#include <cstdlib> 
#include <cstring>
#include <cmath>
#include <climits> 
#include <ctime>

using namespace std;

int main(void){
	char s[3];
	map<string, int> m;
	while(~scanf("%*d,%2s",s))m[string(s)]++;
	printf("%d\n%d\n%d\n%d\n", m["A"], m["B"], m["AB"], m["O"]);
	return 0;
}