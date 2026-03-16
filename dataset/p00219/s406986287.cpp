#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <cstring>
using namespace std;
static const double EPS = 1e-5;
typedef long long ll;


int kind[10];
int pr[100];
main(){
	int n;
	
	while(cin>>n){
		if(n==0)break;
		
		memset(kind,0,sizeof(kind));
		
		for(int i=0;i<n;i++){
			int k;
			cin>>k;
			++kind[k];
		}
		
		for(int i=0;i<10;i++){
			if(kind[i]){
				for(int j=0;j<kind[i];j++)printf("*");
			}else{
				printf("-");
			}
			puts("");
		}
	}
	return 0;
}