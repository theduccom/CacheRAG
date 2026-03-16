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
	char s[3],ans[3];
	int a;
	for(a=0;a<3;a++){
		s[a]='\0';
		ans[a]='\0';
	}
	ans[0]='A';
	while(cin >> s){
		if(ans[0]==s[0])ans[0]=s[2];
		else if(ans[0]==s[2])ans[0]=s[0];
	}
	cout << ans[0] << endl;
    return 0;
}