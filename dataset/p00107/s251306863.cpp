#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<cstring>
#include<stack>
#include<functional>
using namespace std;

int main(){
	double D[3];
	while(cin>>D[0]>>D[1]>>D[2],D[0]||D[1]||D[2]){
		sort(D,D+3);
		double x = D[0], y = D[1];
		double r = sqrt(x*x+y*y);
		int N;
		cin>>N;
		for(int i=0;i<N;i++){
			double R;
			cin>>R;
			if(r<R*2) puts("OK");
			else puts("NA");
		}
	}
}