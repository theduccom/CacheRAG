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


map<int,int> kyori;

int main(){
	int n;
	
	while(cin>>n){
		if(n==0)break;
		
		kyori.clear();
		int max,maxno;
		for(int i=0;i<n;i++){
			int p,d1,d2;
			cin>>p>>d1>>d2;
			kyori[p]=d1+d2;
			max=d1+d2;
			maxno=p;
		}
		
		for(map<int,int>::iterator p=kyori.begin();p!=kyori.end();++p){
			if(p->second>max){
				max=p->second;
				maxno=p->first;
			}
		}
		cout<<maxno<<" "<<max<<endl;
	}
	return 0;
}