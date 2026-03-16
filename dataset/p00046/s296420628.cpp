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
	double h;
	double maxh=0.0,minh=0.0;
	scanf("%d",&h);
	maxh=h;
	minh=h;
	while(~scanf("%lf",&h)){
		maxh=max(maxh,h);
		minh=min(minh,h);
	}
	cout << maxh-minh << endl;
}