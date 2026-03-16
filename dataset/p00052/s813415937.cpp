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
	long long int n;
	while(1){
		cin >> n;
		if(n==0)break;
		long long int ans=0;
		while(n>=5){
			ans+=n/5;
			n=n/5;
		}
		printf("%d\n",ans);
	}
	return 0;
}