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
	int n;
	int a,b;
	int hyo[11][11];
	while(1){
		cin >> n;
		if(n==0)break;
		for(b=0;b<=n;b++){
			for(a=0;a<=n;a++){
				hyo[a][b]=0;
			}
		}
		for(b=0;b<n;b++){
			for(a=0;a<n;a++){
				cin >> hyo[a][b];
				hyo[n][b]+=hyo[a][b];
			}
		}
		for(b=0;b<=n;b++){
			for(a=0;a<n;a++){
				hyo[b][n]+=hyo[b][a];
			}
		}
		for(b=0;b<=n;b++){
			for(a=0;a<=n;a++){
				cout << setw(5) << hyo[a][b];
			}
			cout << endl;
		}
	}
	return 0;
}